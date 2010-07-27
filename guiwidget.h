#ifndef GUIWIDGET_H
#define GUIWIDGET_H

#include <QWidget>

class GuiWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GuiWidget(QWidget *parent = 0);

signals:

public slots:
    void init();

};

#endif // GUIWIDGET_H
