#include "submitSignIn.h"

#include <QDebug>



SubmitSignIn::SubmitSignIn(QObject *parent)
    :InterfaceSign(parent)
{

}

void SubmitSignIn::send()
{
    qDebug() << "SignIn";
}
