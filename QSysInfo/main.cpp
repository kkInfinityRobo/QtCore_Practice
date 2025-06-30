#include <QCoreApplication>
#include <QtCore>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << QSysInfo::buildCpuArchitecture();

    qDebug() << QSysInfo::currentCpuArchitecture();

    qDebug() << QSysInfo::kernelType();

    qDebug() << QSysInfo::kernelVersion();

    qDebug() << QSysInfo::machineHostName();

    qDebug() << QSysInfo::productType();

    qDebug() << QSysInfo::productType();

    return a.exec();
}
