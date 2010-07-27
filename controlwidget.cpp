#include "controlwidget.h"

ControlWidget::ControlWidget(QWidget *parent) :
    QWidget(parent)
{
    hLayout = new QHBoxLayout;
    next = new QPushButton("weiter");
    previous = new QPushButton("zurück");
    skip = new QPushButton("überspringen");
    hLayout->addWidget(previous);
    previous->setEnabled(false);
    hLayout->addWidget(skip);
    skip->setEnabled(false);
    hLayout->addWidget(next);
    QObject::connect(previous, SIGNAL(clicked()), this, SLOT(previousButtonClicked()));
    QObject::connect(skip, SIGNAL(clicked()), this, SLOT(skipButtonClicked()));
    QObject::connect(next, SIGNAL(clicked()), this, SLOT(nextButtonClicked()));
}

void ControlWidget::setLanguage(QString lang){
    QString eng[] = { "step back","skip", "continue"};
    QString deu[] = {"zurück", "überspringen", "weiter"};
    if (lang == "eng"){
        next->setText(eng[2]);
        previous->setText(eng[0]);
        skip->setText(eng[1]);
    } else if ( lang =="deu" ){
        next->setText(deu[2]);
        previous->setText(deu[0]);
        skip->setText(deu[1]);
    } else {
        Logger::getInstance().log("Language unkown, nothing to do", loglevel);
    }

}

void ControlWidget::nextButtonClicked(){
    emit nextClicked();
}

void ControlWidget::previousButtonClicked(){
    emit previousClicked();
}

void ControlWidget::skipButtonClicked(){
    emit skipClicked();
}
