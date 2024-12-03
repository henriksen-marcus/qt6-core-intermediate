#pragma once

#include <QObject>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject* parent);
    ~Test();

signals:
    void onTest();

public slots:
    void testChanged();
};
