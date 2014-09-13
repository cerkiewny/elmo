#include "project.h"
#include <QDebug>
#include <QFile>
#include <QRegExp>

Project::Project(QString filename)
{
    this->filename = filename;
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
       return;

    prepareFields(file.readLine());

    while (!file.atEnd()) {
       QString line = file.readLine();
    }
}
void Project::prepareFields(QString line){
    QRegExp rx("^.*\"");
    rx.setMinimal(true);
    line = line.remove(rx);
    rx = QRegExp("\"[^\"]*$");
    line = line.remove(rx);
    QStringList strings = line.split("\",\"", QString::SkipEmptyParts);
    QVector<QString> * vect = new QVector<QString>();
    for(auto a = strings.constBegin(); a < strings.constEnd(); a++){

        vect->push_back(*a);
    }
}
