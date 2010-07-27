#include <QLabel>
#include "logger.h"
#include "infowidget.h"

InfoWidget::InfoWidget(QWidget *parent) :
    QWidget(parent)
{
    label = new QLabel("Experiment gestartet");
    button = new QPushButton("weiter");

    centralWidget = new QWidget;
    vGroup = new QGroupBox;


    vlayout = new QVBoxLayout;
    vlayout->addWidget(label);
    vlayout->addWidget(button);
    vGroup->setLayout(vlayout);

    widgetlayout = new QVBoxLayout;
    //widgetlayout->addWidget(label);

    widgetlayout->addWidget(vGroup);
    centralWidget->setLayout(widgetlayout);
    this->setLayout(vlayout);
    QObject::connect(button, SIGNAL(clicked()), this, SLOT(click()));
    Logger::getInstance().log("infowidget added", 1);
}

void InfoWidget::setLabelText(QString text){
    label->setText(text);
    Logger::getInstance().log(text, 1);

}

void InfoWidget::click(){
    emit buttonClicked();
}

void InfoWidget::showMe(){
    this->show();
}

void InfoWidget::setButtonLabel(QString label){
    InfoWidget::button->setText(label);
}
