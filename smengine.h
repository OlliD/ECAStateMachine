#ifndef SMENGINE_H
#define SMENGINE_H

#include <QObject>
#include <QString>
#include <QtScriptedStateMachine>
#include <QList>
#include <QMap>
#include <QLayoutIterator>
#include <QTimer>
#include <QSet>
#include <QDomDocument>
#include <QVBoxLayout>

#include "infowidget.h"
#include "inputwidget.h"
#include "dialogwidget.h"
#include "controlwidget.h"
#include "smgui.h"
#include "logger.h"
#include "widgetinterface.h"
#include "domparser.h"


class SMEngine : public QObject
{
    Q_OBJECT

public:
    explicit SMEngine(QDomDocument *trialData, QObject *parent = 0);
    void startEngine();
    SMEngine getEngine();
    SMEngine *smEngine;
    InfoWidget *infoWidget;
    InputWidget *inputWidget;
    ControlWidget *controlWidget;

public slots:
    void repaintGui();
    void changeWidget(const QString, const QString = "");
    void parseXMLFile(QString);
    void showInfoWidget(QString label, QString widget);
    void showInputWidget();
    void addLayout();
    void addWidgetToLayout(const QString, const QString = "");
    void removeWidgetFromLayout(const QString name);

    void toggleFirstUse(bool);
    void finished();
//    void saveStartTime();
//    void loadProfile();

    void executeSpec(QString murmlspec);

    void acceptButton();
//    void declineButton();
    void saveToDom(QString tagName, QString data);

private slots:

    void timeOut();
    void emitClickSignal(int button);

private:
    void showInfoWidget(SMGui* smGui);
    void showDialogWidget();
    //void showInitialWidget();
    float getRandom();
    void executeOnCondition();
    //void save();
    void open();
    void connectSlots();
    void addPause(int);
    QString getElementByTag(QList< QMap<QString, QString> >* list, QString str);
    bool firstUse;
    SMGui *smGui;
    const static int loglevel = 1;
    QLayout *layout;
    QMap<QString, QWidget *> *widgets;
    QList< QMap<QString, QString> >* personData;
    QList< QMap<QString, QString> >* widgetData;
    QMap<QString, QWidget*> widgetMap;
    DOMParser *domParser;
    QTimer *timer;
    QDomElement *child;
    QDomDocument *document;


signals:
    void showMe();
    void setLabel(QString);
    void setWidget(QWidget *w);
    void setLayout(QLayout *l);
    void breakIsOver();
    void yesClicked();
    void noClicked();
    void confirnClicked();
    void skipClicked();
    void createGuiWithList(QList< QMap<QString, QString> >*);
    void createInputGuiWithDataSet(QMap<QString, QString>);


};

#endif // SMENGINE_H
