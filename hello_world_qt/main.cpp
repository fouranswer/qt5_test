#include "mainwindow.h"
#include <QCoreApplication>
#include <QApplication>
#include <receiver.h>
#include <sender.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Sender *sender = new Sender();
    Receiver *receiver = new Receiver();

    QObject::connect(sender, &Sender::actionPerformed, receiver, &Receiver::on_actionPerformed);
    qInfo() << "Emitting signal from" << sender;
    emit sender->actionPerformed();

    MainWindow w;
    w.show();
    return a.exec();
}
