#include <QCoreApplication>
#include <iostream>
#include "test.h"
#include <QList>

QSharedPointer<int> test()
{
    QSharedPointer<int> ptr(new int(2));
    return ptr;
}

void foo(const QString& s);

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    //return a.exec();

    QList<int> l;
    l << 1 << 2 << -1;

    qInfo() << l;

    QMap<int,QString> m;
    m.value(1);

    foo("hello");
}
