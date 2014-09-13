#include "elmo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Elmo w;
    w.show();

    return a.exec();
}
