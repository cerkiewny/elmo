#ifndef PROJECT_H
#define PROJECT_H

#include <QString>

class Project
{
public:
    Project(QString filename);

private:
    QString filename;
    void prepareFields(QString line);
};

#endif // PROJECT_H
