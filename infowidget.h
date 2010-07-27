#ifndef INFOWIDGET_H
#define INFOWIDGET_H

#include <QWidget>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

class InfoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit InfoWidget(QWidget *parent = 0);

private:


    QWidget* centralWidget;
    QGroupBox* vGroup;

    QLabel* label;
    QVBoxLayout* vlayout, *widgetlayout;
    QPushButton* button;


signals:
    void buttonClicked();

public slots:
    void click();

    void setLabelText(QString);
    void showMe();
    void setButtonLabel(QString);

};

#endif // INFOWIDGET_H
