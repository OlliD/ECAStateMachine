#include <QFileDialog>

#include "initialwidget.h"

InitialWidget::InitialWidget(SMGui *smGui, QWidget *parent) :
    QWidget(parent)
{
    infoLabel = new QLabel;
    infoLabel->setText("Framework for empirical virtual agent studies");
    vGroup = new QGroupBox;
    vlayout = new QVBoxLayout;

    tableWidgetLayout = new QVBoxLayout;
    tableGroup = new QGroupBox;

    centralWidget = new QWidget;
    createAction();
    vlayout->addWidget(infoLabel);
    fileMenu = new QMenu(tr("&Datei"), this);
    fileMenu->addAction(openAct);
    fileMenu->addAction(exitAct);
    menu = new QMenuBar();
    menu->addMenu(fileMenu);
    smGui->setMenu(menu);
    QSize pixMapSize(80,50);
    QPixmap image(pixMapSize);
    image.load("/Users/odamm/StateMachine/image.bmp");
    //QPixmap image();
    label = new QLabel();
    label->setPixmap(image);
    hlayout = new QHBoxLayout();
    QVBoxLayout *testLayout = new QVBoxLayout();
    line = new QLineEdit("infoWidget");
    submit = new QPushButton("change manually");
    testLayout->addWidget(line);
    testLayout->addWidget(submit);
    InitialWidget::createSm = new QPushButton("execute state machine");
    InitialWidget::loadSm = new QPushButton("load state machine");
    InitialWidget::loadDataFile = new QPushButton("load Datafile");
    InitialWidget::quit= new QPushButton("Quit App");
    vlayout->addWidget(loadSm);
    vlayout->addWidget(loadDataFile);
    vlayout->addWidget(createSm);
    vlayout->addSpacing(30);
    vlayout->addLayout(testLayout);
    vlayout->addSpacing(30);
    vlayout->addWidget(quit);
    createSm->setEnabled(false);

    tableGroup->setLayout(tableWidgetLayout);
    hlayout->addWidget(label);
    hlayout->addLayout(vlayout);
    vGroup->setLayout(hlayout);

    widgetlayout = new QVBoxLayout;
    widgetlayout->addWidget(vGroup);
    widgetlayout->addWidget(tableGroup);
    this->setLayout(widgetlayout);
    init();
}

void InitialWidget::init(){
    QObject::connect(createSm, SIGNAL(clicked()), this, SLOT( startEngine() ) );
    QObject::connect(loadSm, SIGNAL(clicked()), this, SLOT( open() ) );
    QObject::connect(loadDataFile, SIGNAL(clicked()), this, SLOT( openDataFile() ) );
    //QObject::connect(createSm, SIGNAL(clicked()), this, SLOT(change()));
    QObject::connect(quit, SIGNAL(clicked()), this, SLOT(quitApp()));
    QObject::connect(submit, SIGNAL(clicked()), this, SLOT(testChange()));

}
void InitialWidget::testChange(){
    QString str = line->text();
    Logger::getInstance().log("changing widget",loglevel);

    emit InitialWidget::changeWidget(str);

}

void InitialWidget::change(){
    QString str = "imputWidget";
    Logger::getInstance().log("changing widget",loglevel);

    emit InitialWidget::changeWidget(str);
}

void InitialWidget::startEngine(){
    //QString fileName = QFileDialog::getOpenFileName(this);
    if (!fileName.isEmpty() ){
        Logger::getInstance().log("open file: " + fileName, loglevel);
        emit startButtonClicked(fileName);
    }
    else {
        this->createSm->setEnabled(false);

    }

}

void InitialWidget::open()
{
    fileName = QFileDialog::getOpenFileName(this);
    Logger::getInstance().log(fileName,loglevel);

    if (!fileName.isEmpty()){
        QFile file(fileName);
        this->createSm->setEnabled(true);

        //statusBar()->showMessage(tr("Datei erfolgreich geladen"),3000);

    }
    emit
}
void InitialWidget::openDataFile()
{
    fileName = QFileDialog::getOpenFileName(this);
    Logger::getInstance().log("have something to parse: " + fileName,loglevel);

    if (!fileName.isEmpty()){
        QFile file(fileName);
        emit InitialWidget::fileLoaded(fileName);

        //SMGui::statusBar()->showMessage(tr("Datei erfolgreich geladen"),3000);

    }
    }
void InitialWidget::createAction(){
    openAct = new QAction(tr("&Open..."), this);
    connect(openAct, SIGNAL(triggered()), this, SLOT(open()));

    exitAct = new QAction(tr("&Exit"), this);
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));

}

void InitialWidget::quitApp(){
    emit quitClicked();
}
