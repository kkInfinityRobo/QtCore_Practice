#include <QCoreApplication>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int A = 10;
    qDebug() << "Int to QString : " << QString::number(A);

    QString Temp1 = "20";
    qDebug() << "QString To Int Value : " << QString(Temp1).toInt();

    double B = 20.30;
    qDebug() << "Qstring To Double Value : " << QString::number(B,'f',5);

    QString Temp2 = "25.30";
    qDebug() << "Double To QString Value : " << QString(Temp2).toDouble();

    QString Temp3 = "QtWithMe";
    qDebug() << "Before Add : " << Temp3;
    Temp3 = Temp3.append("Video");
    qDebug() << "After Add : " << Temp3;

    QString Temp4 = "QtWithMe";
    qDebug() << "Before Remove : " << Temp4 << "Length" << Temp4.length();
    Temp4 = Temp4.remove(Temp4.length() - 5, 5);
    qDebug() << "After Remove" << Temp4;

    QString Temp5 = "QtWithMe";
    qDebug() << "Before Replace : " << Temp5;
    Temp5 = Temp5.replace("With","III");
    qDebug() << "After Replace : " << Temp5;

    QString Temp6 = "QtWithMe";
    qDebug() << "Before Insert : " << Temp6;
    Temp6 = Temp6.insert(5,"Test");
    qDebug() << "After Insert : " << Temp6;

    QString Temp7 = "QtWithMe";
    qDebug() << "Before Remove : " << Temp7;
    int NumberOfChar = 3;
    Temp7 = Temp7.remove(5, NumberOfChar);
    qDebug() << "After Remove : " << Temp7;

    QString Temp8 = "QtWithMe";
    QString SubString = "Me";
    qDebug() << Temp8.contains(SubString);

    QString Temp9 = "QtWithMe";
    qDebug() << "Number Of Characters In String : " << Temp9.length();

    QString Temp10;
    qDebug() << "Is Empty : " << Temp10.isEmpty();
    qDebug() << "Is Null : " << Temp10.isNull();

    return a.exec();
}
















