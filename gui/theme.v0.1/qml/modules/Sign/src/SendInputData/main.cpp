#include "main.h"
#include <QDebug>

SendInputData::SendInputData(QObject *parent) : QObject(parent)
{

}

void SendInputData::send()
{
    qDebug() << "hi";
}



