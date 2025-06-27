#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<QString> Values;
    Values.push_back("1");
    Values.push_back("2");
    Values.push_back("3");
    Values.push_back("4");
    Values.push_back("5");
    qDebug() << "After Push Back The Elements" << Values;

    Values.pop_back();
    qDebug() << "After Pop Back The Elements" << Values;

    Values.push_front("6");
    qDebug() << "After Push Front The Elements" << Values;

    Values.pop_front();
    qDebug() << "After Pop Front The Elements" << Values;


    qDebug() << "Number Of Elements : " << Values.size();

    qDebug() << "Is Vector Empty : " << Values.isEmpty();

    Values.clear();

    qDebug() << "After Clear QVector : " << Values;

    qDebug() << "Is Vector Empty : " << Values.isEmpty();

    return a.exec();
}















