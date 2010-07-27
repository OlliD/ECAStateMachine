#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

#include "smengine.h"
#include "domparser.h"

SMEngine::SMEngine(QDomDocument *trialData, QObject *parent) :
    QObject(parent)
{
    document = new QDomDocument(*trialData);
    smGui = new SMGui();
    domParser = new DOMParser();
}

void SMEngine::startEngine(){

    widgetMap.insert("inputWidget", new InputWidget());
    widgetMap.insert("infoWidget", new InfoWidget());
    widgetMap.insert("dialogWidget", new DialogWidget());
    //widgetMap.insert("initialWidget", new InitialWidget(smGui));
    SMEngine::personData = new QList< QMap<QString, QString> >;
    SMEngine::widgetData = new QList< QMap<QString, QString> >;
    Logger::getInstance().log("SMEngine initialized", loglevel);
    parseXMLFile("fileName");   //TODO: change signature
    connectSlots();
}


void SMEngine::connectSlots(){
    //QObject::connect(this, SIGNAL(showMe()), SMEngine::widgetMap.value("infoWidget"), SLOT(showMe()));
    QObject::connect(this, SIGNAL(setLabel(QString)), SMEngine::widgetMap.value("infoWidget"), SLOT(setLabelText(QString)));
    QObject::connect(this, SIGNAL(setWidget(QWidget*)), smGui, SLOT(setCurrentWidget(QWidget*)));
    Logger::getInstance().log("SLOTS connected", loglevel);
}


void SMEngine::changeWidget(const QString name , const QString dataTag){
    Logger::getInstance().log("changing widget to: " + name, loglevel);

    if (name == "inputWidget" && dataTag != ""){
        Logger::getInstance().log("SMENGINE: changing widget to: " + name + " with dataTag: " + dataTag, loglevel);
        QWidget *widget = widgetMap.value(name);
        QObject::connect(widget, SIGNAL(buttonClicked()), this, SLOT(acceptButton()));
        QObject::connect(widget, SIGNAL(submitData(QString QString)), this, SLOT(saveToDom(QString,QString)));
        QObject::connect(this, SIGNAL(createGuiWithList(QList<QMap<QString,QString> >*)), widget, SLOT(createGuiWithList(QList< QMap<QString, QString> >*)));
        emit createGuiWithList(personData);
        emit setWidget(widget);

    }
    else if(name == "infoWidget"&& dataTag != ""){
        QWidget *widget = widgetMap.value(name);
        emit setLabel(getElementByTag(widgetData, dataTag));
        QObject::connect(widget, SIGNAL(buttonClicked()), this, SLOT(acceptButton()));
        emit setWidget(widget);
        }
    else{
        QWidget *widget = widgetMap.value(name);
//        emit setWidget(widget);
        }
    //emit showMe();
   smGui->update();
}

void SMEngine::showInfoWidget(QString label, QString widget){
    QString widgetText = "";
    for( int i = 0; i <widgetData->length(); i++){
            QMap<QString, QString>  map = widgetData->at(i);
        if (map.contains(label)){
            widgetText = map.value(label);
        }
        else{
            widgetText = "not found in Map";
        }
    }
    changeWidget(widget);
    emit setLabel(widgetText);
}

void SMEngine::saveToDom(QString tagName, QString data){
    Logger::getInstance().log("receiving data: " + tagName + " and: " + data, loglevel);

}


void SMEngine::parseXMLFile(QString filename){
    Logger::getInstance().log("got something to parse: " + filename, loglevel);

    emit domParser->parseElements(*document, "Person", personData );
    emit domParser->parseElements(*document, "Widgets", widgetData );

}

QString SMEngine::getElementByTag(QList<QMap<QString, QString> > *list, QString str){
    QString rStr;
    for (int i = 0; i < list->length(); i++){
        QMap<QString, QString>  map = widgetData->at(i);
        rStr = map.value(str);
        Logger::getInstance().log("in map: " + str, 1);

    }
    return rStr;
}


void SMEngine::acceptButton(){

    int c = 1;
    SMEngine::emitClickSignal(c);
}

void SMEngine::emitClickSignal(int button){
    switch (button){
    case 1:
        emit yesClicked();
        break;
    case '2':
        emit noClicked();
        break;
    case '3':
        emit confirnClicked();
        break;
    case '4':
        emit skipClicked();
        break;
    default:
        Logger::getInstance().log("Button unbekannt", loglevel);
    }
}

void SMEngine::showInputWidget(){

}



float SMEngine::getRandom(){

}

void SMEngine::executeSpec(QString murmlspec){
    Logger::getInstance().log(murmlspec, loglevel);
    // send command to execute murmlspec
}

void SMEngine::executeOnCondition(){

}

void SMEngine::addPause(int msec){
    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(timeOut()));
    timer->start(msec);
}

void SMEngine::timeOut(){
    QObject::disconnect(SMEngine::timer, SIGNAL(timeout()), this, SLOT(timeOut()));
    emit breakIsOver();
}

void SMEngine::save(){
    QString fileName =
            QFileDialog::getSaveFileName(smGui, tr("XML-Datei speicher"), QDir::currentPath(), tr("XML Datei (*.xml)"));// (this, tr("XML-Datei speichern"), QDir::currentPath(), tr("XML Datei (*.xml)"));
    if(fileName.isEmpty())
        return;
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(smGui, tr("Fehler beim lesen"),
                             tr("Kann die Daten %1 nicht lesen: \n%2").arg(fileName).arg(file.errorString()));
        return;
    }
}

void SMEngine::finished(){
    Logger::getInstance().log("it's all been done", loglevel);
}

void SMEngine::repaintGui(){
    smGui->repaint();
    smGui->update();
}

