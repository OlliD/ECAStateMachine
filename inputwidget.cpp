#include <QMapIterator>

#include "inputwidget.h"
#include "smengine.h"

InputWidget::InputWidget(QString dataTag, QWidget *parent) :
    QWidget(parent)
{
    //TODO: change something to get it more flexible and to add different layouts
    //creating all the stuff
    hLayout = new QHBoxLayout;
    layout = new QVBoxLayout;
    vLayout = new QVBoxLayout;
    vLayoutLeft = new QVBoxLayout;
    vLayoutright = new QVBoxLayout;
    label = new QLabel("Eingabe");
    layout->addWidget(label);
    input = new QTextEdit;
    enter = new QPushButton;
    //output->setEnabled(false);

    label->setDisabled(true);

    //adding all the widgets
    //hLayout->addWidget(input);
    layout->addLayout(hLayout);

    layout->addWidget(enter);


    this->setLayout(layout);
    connect(enter,SIGNAL(clicked()),this, SLOT(click()));
    //this->createGuiWithList(dataTag);
}

void InputWidget::createGuiWithDataSet(QMap<QString, QString>){


}

void InputWidget::click(){
    for (int i = 0; i <labList.size(); i++){
        emit submitData(labList[i]->text(), inList[i]->text());
    }

    emit buttonClicked();
}


void InputWidget::createGuiWithList(QList< QMap<QString, QString> > *list){
    Logger::getInstance().log("processing widget list", loglevel);
    //inList = new QList<QLineEdit>;
    for (int i = 0; i < list->size(); ++i){
        QMap<QString, QString>e = list->at(i);
        QMapIterator<QString, QString> strIter(e);
        strIter.next();
        labList[i] = new QLabel(strIter.key());
        vLayoutLeft->addWidget(labList[i]);
        inList[i] = new QLineEdit();
        vLayoutright->addWidget(inList.at(i));
    }
    hLayout->addLayout(vLayoutLeft);
    hLayout->addLayout(vLayoutright);
}


void InputWidget::createGuiWithUiFile(QString fileName){
    Logger::getInstance().log("not yet implemented", loglevel);
}
