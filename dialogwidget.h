#ifndef DIALOGWIDGET_H
#define DIALOGWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

class DialogWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DialogWidget(QWidget *parent = 0);

signals:

public slots:
    void setLabelText(QString);
    void acivateSkipButton(bool state);

private:
    QLabel *label;
    QHBoxLayout *hBoxLayout;
    QVBoxLayout *vBoxLayout;
    QPushButton *yesButton, *noButton, *skipButton;

};

#endif // DIALOGWIDGET_H
