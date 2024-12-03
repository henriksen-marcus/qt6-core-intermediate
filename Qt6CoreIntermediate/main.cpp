#include <QCoreApplication>
#include <iostream>
#include "test.h"


void test()
{
    QScopedPointer<int> sp(new int(5));
    qInfo() << *sp;
}

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    test();

    //return a.exec();
}
