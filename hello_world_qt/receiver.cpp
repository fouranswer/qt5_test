#include "receiver.h"
#include <QDebug>

Receiver::Receiver(QObject *parent) : QObject(parent)
{

}

void Receiver::on_actionPerformed()
{
    qInfo() << "Exceuting slot from" << this;

}
