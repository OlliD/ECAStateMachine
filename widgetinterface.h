#ifndef WIDGETINTERFACE_H
#define WIDGETINTERFACE_H

#include <QObject>

class WidgetInterface : public QObject
{
    Q_OBJECT
public:
    explicit WidgetInterface(QObject *parent = 0);
    virtual ~WidgetInterface(){}
    virtual void OverrideMe() = 0;

signals:

public slots:

};

#endif // WIDGETINTERFACE_H
