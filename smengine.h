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

#include "infowidget.h"
#include "inputwidget.h"
#include "dialogwidget.h"
#include "initialwidget.h"
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
    InitialWidget *initialWidget;

public slots:
    void repaintGui();
    void changeWidget(const QString, const QString = "");
    void parseXMLFile(QString);
    void showInfoWidget(QString label, QString widget);
    void showInputWidget();

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
    void save();
    void open();
    void connectSlots();
    void addPause(int);
    QString getElementByTag(QList< QMap<QString, QString> >* list, QString str);

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
    void breakIsOver();
    void yesClicked();
    void noClicked();
    void confirnClicked();
    void skipClicked();
    void createGuiWithList(QList< QMap<QString, QString> >*);
    void createInputGuiWithDataSet(QMap<QString, QString>);


};

#endif // SMENGINE_H
