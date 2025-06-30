#include <QCoreApplication>
#include <QtCore>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFileInfo Information(QCoreApplication::applicationDirPath() + "");

    qDebug() << "exists" << Information.exists();
    qDebug() << "fileName" << Information.fileName();
    qDebug() << "baseName" << Information.baseName();
    qDebug() << "filePath" << Information.filePath();
    qDebug() << "path" << Information.path();
    qDebug() << "lastModified" << Information.lastModified();
    //qDebug() << Information.created();
    qDebug() << "split" << Information.fileName().split(".")[0];



    return a.exec();
}
