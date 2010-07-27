
#include "smgui.h"
#include "logger.h"

SMGui::SMGui(QWidget *parent) :
    QMainWindow(parent)
{

    vlayout = new QVBoxLayout;
    vGroup = new QGroupBox;
    vGroup->setLayout(vlayout);

    widgetlayout = new QVBoxLayout;
    centralWidget = new QWidget;

    centralWidget->setLayout(widgetlayout);


    setCentralWidget(centralWidget);

    this->show();
    Logger::getInstance().log("creating GUI", 1);

}

void SMGui::setCurrentWidget(QWidget *w){
    Logger::getInstance().log("changing GUI", 1);
    //widgetlayout->addWidget(w);
    SMGui::setCentralWidget(w);
    this->repaint();
}

void SMGui::setCurrentLayout(QLayout *l){
    Logger::getInstance().log("adding new Layout", 1);
    //widgetlayout->addWidget(w);
    SMGui::setLayout(l);
    this->repaint();
}


void SMGui::setMenu(QMenuBar *m){
    this->setMenuBar(m);
}


void SMGui::initialize(){
    Logger::getInstance().log("inializing GUI", 1);
    this->show();
}

