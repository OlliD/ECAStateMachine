#ifndef CONTROLWIDGET_H
#define CONTROLWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

#include "logger.h"

class ControlWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ControlWidget(QWidget *parent = 0);

signals:
    void nextClicked();
    void previousClicked();
    void skipClicked();

public slots:
    void setLanguage(QString);
    void enableNextButton(bool);
    void enablePreviousButton(bool);
    void enableSkipButton(bool);
    void nextButtonClicked();
    void previousButtonClicked();
    void skipButtonClicked();

private:
    QPushButton *next, *previous, *skip;
    QHBoxLayout *hLayout;
    const static int loglevel = 1;

};

#endif // CONTROLWIDGET_H
