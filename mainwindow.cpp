
#include "mainwindow.h"


MainWindow::MainWindow(QApplication *a, QWidget *parent) :
    QMainWindow(parent)
{
    MainWindow::quit= new QPushButton("Quit App");
    QObject::connect(quit, SIGNAL(clicked()), a, SLOT(quit()));
    domParser = new DOMParser();

    initGui();
    connectSlots();
}


MainWindow::~MainWindow()
{
    //delete ui;
}

void MainWindow::initGui(){
    infoLabel = new QLabel;
    infoLabel->setText("Framework for empirical virtual agent studies");
    vGroup = new QGroupBox;
    vlayout = new QVBoxLayout;

    //centralWidget = new QWidget;
    createAction();
    vlayout->addWidget(infoLabel);
    menu = new QMenuBar();
    fileMenu = new QMenu(tr("&Datei"), this);
    fileMenu->addAction(openAct);
    fileMenu->addAction(exitAct);
    menu->addMenu(fileMenu);
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
    MainWindow::firstUseBox = new QCheckBox("Nehmen Sie erste mal teil?");
    MainWindow::loadExistingProfile = new QPushButton("Profil laden");
    MainWindow::createSm = new QPushButton("execute state machine");
    MainWindow::loadSm = new QPushButton("load state machine");
    MainWindow::loadDataFile = new QPushButton("load Datafile");
    vlayout->addWidget(loadSm);
    vlayout->addWidget(firstUseBox);
    firstUseBox->setEnabled(false);
    vlayout->addWidget(loadDataFile);
    vlayout->addWidget(createSm);
    vlayout->addSpacing(30);
    //TODO:for testing onlay
    //vlayout->addLayout(testLayout);
    vlayout->addSpacing(30);
    vlayout->addWidget(quit);
    createSm->setEnabled(false);
    loadDataFile->setEnabled(false);
    hlayout->addWidget(label);
    hlayout->addLayout(vlayout);
    vGroup->setLayout(hlayout);

    setCentralWidget(vGroup);
    this->show();
}

void MainWindow::showWindow(){
    statusBar()->showMessage(tr("Durchlauf abgeschlossen"),3000);

    this->show();
}

void MainWindow::createAction(){
    openAct = new QAction(tr("&Open..."), this);
    connect(openAct, SIGNAL(triggered()), this, SLOT(open()));

    exitAct = new QAction(tr("&Exit"), this);
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::connectSlots(){
    //QObject::connect(MainWindow::createSm, SIGNAL(clicked()), this, SLOT(startScript()));
    QObject::connect(loadDataFile, SIGNAL(clicked()), this, SLOT(openDataFile()));
    QObject::connect(loadSm, SIGNAL(clicked()),this, SLOT(open()) );
    QObject::connect(firstUseBox, SIGNAL(clicked()), this, SLOT(openDataFile()));
    QObject::connect(createSm, SIGNAL(clicked()), this, SLOT(startScript()));
}

void MainWindow::open()
{
    //fileName = new QString();
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "/Users/odamm/StateMachine/xml",
                                                     tr("XML-Files (*.xml)"));
    if (!fileName.isEmpty()){
        statusBar()->showMessage(tr("Datei erfolgreich geladen"),3000);
        stateMachine = QtScriptedStateMachine::load(fileName);
        loadSm->setEnabled(false);
        loadDataFile->setEnabled(true);
        firstUseBox->setEnabled(true);


    }
}

void MainWindow::openDataFile(){
if (firstUseBox->isChecked())
    loadDataFile->setEnabled(false);
else
    firstUseBox->setEnabled(false);


    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "/Users/odamm/StateMachine/xml",
                                                     tr("XML-Files (*.xml)"));
    QFile file(fileName);
    document = new QDomDocument();
    child = new QDomElement();
    if(domParser->read(&file, *document ) && !fileName.isEmpty()){
        statusBar()->showMessage(tr("Datei erfolgreich geladen"), 3000);
        loadDataFile->setEnabled(false);
        createSm->setEnabled(true);
    }

    //MainWindow::data = new QList< QMap<QString, QString> >;
    //domParser->parseElements(*document, "Person", data);
    //domParser->updateElement(*document, "Info_2", "klause");
    //domParser->modifyElement(*document, "Name", "new");
    //domParser->saveDocument(*document);
}

void MainWindow::startScript(){
    Logger::getInstance().log("lets run the SSM, registering the SMEngine" ,loglevel);
    smEngine = new SMEngine(document);
    smEngine->setObjectName("smEngine");
    stateMachine->registerObject(smEngine);
    QTimer timer;
    timer.start(2000);
    this->hide();
    QObject::connect(this, SIGNAL(firstUse(bool)), smEngine, SLOT(toggleFirstUse(bool)));
    QObject::connect(stateMachine, SIGNAL(finished()), smEngine, SLOT(finished()));
    stateMachine->start();
    if (firstUseBox->isChecked())
        emit firstUse(true);
    smEngine->startEngine();
    Logger::getInstance().log("StateMachine started", loglevel);

}

