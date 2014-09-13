#ifndef COMPONENT_H
#define COMPONENT_H

#include<QString>
#include<QStringList>

class Component
{


public:
    static char separator;
    static char delimiter;
    QString Designator;
    QString Footprint;
    double midX;
    double midY;
    double refX;
    double refY;
    bool isTopLayer;
    int rotation;
    QString comment;

    Component(QString line);

};

char Component::separator = ',';

char Component::delimiter = '\'';

#endif // COMPONENT_H
