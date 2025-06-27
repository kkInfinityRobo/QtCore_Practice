#include <QCoreApplication>
#include <QStringList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString Temp1 = "India,USA,UK,Japan,China";
    QStringList CountryList = Temp1.split(",");
    qDebug() << "CountryList: " << CountryList;

    QStringList Temp2;
    Temp2 << "Qt";
    Temp2 << "With" << "me";
    qDebug() << Temp2;

    QStringList Temp3;
    Temp3 << "Qt" << "With" << "me";
    qDebug() << "Before Remove:" << Temp3;
    Temp3.removeAt(1);
    qDebug() << "After Remove:" << Temp3;

    QStringList Temp4;
    Temp4 << "Qt" << "Qt" << "me";
    qDebug() << "Before Remove:" << Temp4;
    QStringList TempValue;

    for(int i = 0; i < Temp4.length(); i++)
    {
        if (TempValue.contains(Temp4[i])==false)
        {
            TempValue.append(Temp4[i]);
        }
    }
    qDebug() << "After Remove: " << TempValue;

    QStringList Temp5;
    Temp5 << "Qt" << "me" << "Qt" << "me";
    qDebug() << Temp5.join("$$$");

    return a.exec();
}
