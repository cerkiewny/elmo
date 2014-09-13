#include <QDebug>
#include <QFileDialog>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "elmo.h"
#include "ui_elmo.h"

Elmo::Elmo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Elmo),
    shortcuts(new QList<QShortcut*>),
    projects(new QList<Project*>),
    lastSaveFilename("")

{

    ui->setupUi(this);
    QShortcut * shortcut = new QShortcut(QKeySequence(tr("Ctrl+L", "File|actionOpen")), this);
    shortcut->setContext(Qt::ApplicationShortcut);
    connect(shortcut, SIGNAL(activated()), this, SLOT(on_actionOpen_triggered()));
    shortcuts->push_back(shortcut);
    shortcut = new QShortcut(QKeySequence(tr("Ctrl+S", "File|actionSave")), this);
    shortcut->setContext(Qt::ApplicationShortcut);
    connect(shortcut, SIGNAL(activated()), this, SLOT(on_actionSave_triggered()));
    shortcuts->push_back(shortcut);
    shortcut = new QShortcut(QKeySequence(tr("Ctrl+N", "File|actionNew")), this);
    shortcut->setContext(Qt::ApplicationShortcut);
    connect(shortcut, SIGNAL(activated()), this, SLOT(on_actionNew_triggered()));
    shortcuts->push_back(shortcut);
    shortcut = new QShortcut(QKeySequence(tr("Ctrl+Shift+S", "File|actionSave_as")), this);
    shortcut->setContext(Qt::ApplicationShortcut);
    connect(shortcut, SIGNAL(activated()), this, SLOT(on_actionSaveAs_triggered()));
    shortcuts->push_back(shortcut);
    shortcut = new QShortcut(QKeySequence(tr("Ctrl+O", "File|actionAdd")), this);
    shortcut->setContext(Qt::ApplicationShortcut);
    connect(shortcut, SIGNAL(activated()), this, SLOT(on_actionAdd_triggered()));
    shortcuts->push_back(shortcut);
    QImage image("/home/cerkiewny/test.png");

    QGraphicsView* view = findChild<QGraphicsView*>("mainView");
    QGraphicsScene* scene = new QGraphicsScene();
    QGraphicsPixmapItem * item = new QGraphicsPixmapItem( QPixmap::fromImage(image));
    scene->addItem(item);
    view->setScene(scene);
    view->show();
}

Elmo::~Elmo()
{
    delete ui;
    delete shortcuts;
}

void Elmo::on_actionOpen_triggered()
{
    lastSaveFilename = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Files (*.csv)"));
    projects->clear();
    projects->push_back(new Project(lastSaveFilename));
    return;
}

void Elmo::on_actionSave_triggered()
{
    if(lastSaveFilename != ""){
        lastSaveFilename = QFileDialog::getSaveFileName(this, tr("Open File"), "", tr("Files (*.csv)"));
    }
    else{
        //TODO add save later
    }
    return;
}

void Elmo::on_actionNew_triggered(){
    projects->clear();
    lastSaveFilename = "";
    return;
}


void Elmo::on_actionAdd_triggered(){
    lastSaveFilename = "";
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Files (*.csv)"));
    return;
}

void Elmo::on_actionSaveAs_triggered()
{
    lastSaveFilename = QFileDialog::getSaveFileName(this, tr("Open File"), "", tr("Files (*.csv)"));
    qDebug("lulz");
    return;
}
