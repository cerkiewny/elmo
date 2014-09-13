#include "component.h"

Component::Component(QString line)
{
   QStringList temp = line.split(Component::delimiter + Component::separator + Component::delimiter, QString::SkipEmptyParts);
   temp[0] = temp[0].remove(0,1);

}
