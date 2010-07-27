#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QApplication>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QLabel>
#include <QAction>
#include <QActionGroup>
#include <QMenu>
#include <QFile>
#include <QList>
#include <QStatusBar>
#include <QPushButton>
#include <QMenuBar>
#include <QPixmap>
#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QSize>
#include <QtScriptedStateMachine>
#include <QStatusBar>
#include <QFileDialog>
#include <QString>
#include <QTimer>
#include <QDomDocument>
#include <QCheckBox>

#include "smengine.h"
#include "logger.h"
#include "smgui.h"
#include "domparser.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QApplication *a, QWidget *parent = 0);
    ~MainWindow();

public slots:
    void showWindow();
    void open();

private slots:
    void startScript();
    void openDataFile();


private:

    //methods
    void initGui();
    void connectSlots();
    void createActions();

    //DataFields
    const static int loglevel = 1;
    SMEngine *smEngine;
    DOMParser *domParser;
    QWidget *myWidget;
    QLabel* label, *infoLabel;
    QPushButton *loadSm, *loadDataFile, *loadExistingProfile;
    QPushButton *createSm, *quit, *submit;
    QLineEdit *line;
    QCheckBox *firstUseBox;
    QVBoxLayout *vlayout;
    QHBoxLayout *hlayout;
    QVBoxLayout *tableWidgetLayout;
    QVBoxLayout *widgetlayout;
    QGroupBox *vGroup;
    QGroupBox *tableGroup;
    QWidget *centralWidget;
    QMenu *fileMenu;
    QMenu *helpMenu;
    QMenuBar *menu;
    QString *fileName;
    QtScriptedStateMachine *stateMachine;
    QDomElement *child;
    QDomDocument *document;
    QList< QMap<QString, QString> > *data ;
    //QPixmap* image;


    QFile *file;
    //SMGui *smGui;

    QAction *openAct;
    QAction *exitAct;
    void createAction();
    void loadFile(const QString &fileName);

signals:
    void firstUse(bool);

};

#endif // MAINWINDOW_H
