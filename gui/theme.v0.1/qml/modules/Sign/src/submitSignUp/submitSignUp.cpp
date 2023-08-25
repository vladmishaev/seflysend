#include "submitSignUp.h"

#include <QDebug>



SubmitSignUp::SubmitSignUp(QObject *parent)
    :InterfaceSign(parent)
{

}

void SubmitSignUp::send()
{
    qDebug() << "SignUp";
}
