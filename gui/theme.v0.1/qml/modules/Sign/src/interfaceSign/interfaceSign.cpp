#include "interfaceSign.h"

InterfaceSign::InterfaceSign(QObject *parent) : QObject(parent){}


QString InterfaceSign::login(void)
{
    return m_login;
}

void InterfaceSign::setLogin(QString newLogin)
{
    if(newLogin != m_login)
    {
        m_login = newLogin;
        emit loginChanged();
    }

    return;
}

QString InterfaceSign::password(void)
{
    return m_password;
}

void InterfaceSign::setPassword(QString newPassword)
{
    if(newPassword != m_password)
    {
        m_password = newPassword;
        emit passwordChanged();
    }

    return;
}





