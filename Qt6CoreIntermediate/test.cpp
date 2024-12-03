#include "test.h"
#include <QTimer>


Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << "Constructed!";
    QTimer::singleShot(3000, [this]{emit onTest();});
    QObject::connect(this, &Test::onTest, this, &Test::testChanged);
}

Test::~Test()
{
    qWarning() << this << "Deconstructed";
}

void Test::testChanged()
{
    qInfo() << "Test changed!!!";
}
