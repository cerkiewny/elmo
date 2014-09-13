#ifndef ELMO_H
#define ELMO_H

#include <QList>
#include <QShortcut>
#include <QMainWindow>
#include "project.h"

namespace Ui {
class Elmo;
}

class Elmo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Elmo(QWidget *parent = 0);
    ~Elmo();

private slots:
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionNew_triggered();
    void on_actionAdd_triggered();
    void on_actionSaveAs_triggered();

private:
    Ui::Elmo *ui;
    QList<QShortcut*> *shortcuts;
    QList<Project*> *projects;
    QString lastSaveFilename;
};

#endif // ELMO_H
