#ifndef INITIALWIDGET_H
#define INITIALWIDGET_H

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
#include "logger.h"
#include "smgui.h"

class InitialWidget : public QWidget
{
    Q_OBJECT
public:
    explicit InitialWidget(SMGui *smGui = 0, QWidget *parent = 0);

signals:
    void changeWidget(QString);
    void fileLoaded(QString);
    void startButtonClicked(QString);
    void quitClicked();

public slots:
    void startEngine();
   // void showWindow();
    void open();
    void openDataFile();
    void change();
    void testChange();
    void init();
    void quitApp();


private:
    QWidget *myWidget;
    QLabel* label;
    QPushButton *loadSm, *loadDataFile;
    QPushButton *createSm, *quit, *submit;
    QLineEdit *line;
    QVBoxLayout* vlayout;
    QHBoxLayout* hlayout;
    QVBoxLayout* tableWidgetLayout;
    QVBoxLayout* widgetlayout;
    QGroupBox* vGroup;
    QGroupBox* tableGroup;
    QWidget* centralWidget;
    QMenu *fileMenu;
    QMenu *helpMenu;
    QMenuBar *menu;
    QString fileName;
    //QPixmap* image;

    QFile *file;
    //SMGui *smGui;

    QAction *openAct;
    QAction *exitAct;
    void createAction();
    void loadFile(const QString &fileName);
    QLabel *infoLabel;
    const static int loglevel = 1;

};

#endif // INITIALWIDGET_H
