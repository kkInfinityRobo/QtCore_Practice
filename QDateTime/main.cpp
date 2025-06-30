#include <QCoreApplication>
#include <QDebug>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << QDateTime::currentDateTime();

    qDebug() << QDateTime::currentDateTime().toString("dd-MM-yyyy HH:mm:ss:zzz");
    qDebug() << QDateTime::currentDateTime().toString("dd/MM/yyyy HH:mm:ss:zzz");

    qDebug() << "After Add Days : " << QDateTime::currentDateTime().addDays(10).toString("dd/MM/yyyy");

    qDebug() << "After Add Months : " << QDateTime::currentDateTime().addMonths(2).toString("dd/MM/yyyy");

    qDebug() << "After Add Years : " << QDateTime::currentDateTime().addYears(3).toString("dd/MM/yyyy");

    QString Date_1 = "12-05-2024";
    QString Date_2 = "18-05-2024";
    qDebug() << "Number Of Days Difference Between To Dates" << QDateTime::fromString(Date_2,"dd-MM-yyyy").daysTo( QDateTime::fromString(Date_1,"dd-MM-yyyy"));

    qDebug() << "TimeZone:" << QDateTime::currentDateTime().timeSpec();

    return a.exec();
}





























