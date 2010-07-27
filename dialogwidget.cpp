#include "logger.h"

#include "dialogwidget.h"

DialogWidget::DialogWidget(QWidget *parent) :
    QWidget(parent)
{
    vBoxLayout = new QVBoxLayout;
    hBoxLayout = new QHBoxLayout;
    yesButton = new QPushButton("Yes");
    noButton = new QPushButton("No");
    skipButton = new QPushButton("Skip");
    label = new QLabel("empty");
    hBoxLayout->addWidget(yesButton);
    hBoxLayout->addWidget(noButton);
    hBoxLayout->addWidget(skipButton);
    skipButton->setEnabled(false);
    vBoxLayout->addWidget(label);
    vBoxLayout->addLayout(hBoxLayout);
    this->setLayout(vBoxLayout);

   // this->show();
    Logger::getInstance().log("Dialogwidget added", 1);

}

void DialogWidget::setLabelText(QString text){
    label->setText(text);
}

void DialogWidget::acivateSkipButton(bool state){
    skipButton->setEnabled(state);
}
