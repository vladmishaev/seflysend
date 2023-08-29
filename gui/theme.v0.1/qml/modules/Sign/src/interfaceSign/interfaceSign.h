#ifndef INTERFACESIGN_H
#define INTERFACESIGN_H

#include <QObject>



class InterfaceSign : public QObject{
    Q_OBJECT
    Q_PROPERTY(QString login READ login
                WRITE setLogin NOTIFY loginChanged);
    Q_PROPERTY(QString password READ password
                WRITE setPassword NOTIFY passwordChanged);
public:
    explicit InterfaceSign(QObject *parent = nullptr);

protected:
    QString m_login;
    QString m_password;

public:
    QString login(void);
    void setLogin(QString);

    QString password(void);
    void setPassword(QString);

signals:
    void loginChanged(void);
    void passwordChanged(void);
};

#endif // INTERFACESIGN_H
