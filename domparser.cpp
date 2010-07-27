#include <iostream>
#include <sstream>
#include <string>
#include <QtGui>
#include <QtXml>
#include <QDomElement>
#include <QList>
#include <QDomNodeList>

#include "domparser.h"
#include "logger.h"

DOMParser::DOMParser(QWidget *parent) :
        QTreeWidget(parent)
{
    Logger::getInstance().log("DOMParser started", loglevel);
}

bool DOMParser::read(QIODevice *device, QDomDocument &document){
    //zum schönen lesen wird hier die setContent-Methode benutzt um so etwaige Fehler gleich abzufangen.
    QString errorStr;
    int errorLine;
    int errorColumn;
    if(!document.setContent(device, true, &errorStr, &errorLine, &errorColumn)){
        QMessageBox::information(this, tr("DOM Fehler"), tr("Fehler in Zeile %1, Spalte %2:\n%3").arg(errorLine).arg(errorColumn).arg(errorStr));
        return false;
    }
// Checken ob das ROOT-Element "Trialdata" heisst
    QDomElement root = document.documentElement();
    if (root.tagName() != "Trialdata"){
        QMessageBox::information(this, tr("DOM Fehler"), tr ("Das ist keine gültige Datei"));
        return false;
    }
    Logger::getInstance().log("root element is: " + root.firstChildElement().tagName(), loglevel);
return true;
}

// method requires a dom-file, tag to search and a list of maps to return the parsed elements
void DOMParser::parseElements(QDomDocument &document, QString tagName, QList< QMap<QString, QString> >* parsedData){
    QDomElement child = document.firstChildElement();//element.firstChildElement();
    Logger::getInstance().log("parseElements starts with element: " + child.tagName(), loglevel);
    while(!child.isNull()){
            Logger::getInstance().log("found element named: " + tagName, loglevel);
            DOMParser::parse(child, tagName, parsedData);
            child = child.firstChildElement("data");
   }

    std::ostringstream tmp;
    tmp << parsedData->length();
    std::string str = tmp.str();
    QString qStr(str.c_str());
    Logger::getInstance().log("elements in retValues: "+qStr, loglevel);
}

void DOMParser::parse( QDomElement &child, QString tagName, QList< QMap<QString, QString> >* parsedData){
    QDomElement element = child.firstChildElement();
    while(!element.isNull()){
        if(element.tagName() == tagName){
            addItems(element, tagName, parsedData);
        }
        parse(element, tagName, parsedData);
        element = element.nextSiblingElement();

    }
}

//adds new elements to the qlist
void DOMParser::addItems(QDomElement &child, QString tagName, QList<QMap<QString, QString> > *parsedData){
    child = child.firstChildElement();
    while(!child.isNull()){
       QMap<QString, QString> elements;
       elements[child.nodeName()] = child.text();//str.toText();//child.attribute("type");
       if(!parsedData->contains(elements))
           parsedData->append(elements);
       Logger::getInstance().log("adding: " + child.nodeName() + " " + child.text(), loglevel);
       child = child.nextSiblingElement();
   }
}

//requests a domdocument, the name of tag to be updated and the data to stored
void DOMParser::modifyElement(QDomDocument &document, QString tagName, QString data){
    Logger::getInstance().log("document starts with: " + document.firstChildElement().tagName(), 1);

    QDomNodeList domList = document.elementsByTagName(tagName.toLower());
    QDomNode parent = domList.at(0);
    if(parent.isNull()){
        Logger::getInstance().log("String not found", loglevel);
        return;
    }
    QDomText text = document.createTextNode(data);
    QDomElement e = parent.toElement();
    e.replaceChild(text, e.firstChild());
    Logger::getInstance().log("number of elements in List for : " + e.tagName()  + " " + domList.length(), 1);
}
//requires the domdocument and writes it to a new file
void DOMParser::saveDocument(QDomDocument &document){
    QFile qFile("/Users/odamm/StateMachine/xml/trial_001.xml");
    qFile.open(QIODevice::WriteOnly);
    QTextStream out(&qFile);
    QString xml = document.toString();
    out<<xml;
    out.flush();
    qFile.flush();
    qFile.close();
}
