#ifndef INTERFACESIGN_H
#define INTERFACESIGN_H

#include <QObject>



class InterfaceSign : public QObject{
    Q_OBJECT
public:
    explicit InterfaceSign(QObject *parent = nullptr);
};

#endif // INTERFACESIGN_H
