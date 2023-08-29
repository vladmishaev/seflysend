#include "submitSignIn.h"

#include <QDebug>



SubmitSignIn::SubmitSignIn(QObject *parent)
    :InterfaceSign(parent)
{
    m_login = "";
    m_password = "";
}


void SubmitSignIn::send(void)
{
    return;
}
