#ifndef SIGNBUTTON_H
#define SIGNBUTTON_H

#include <QObject>



class SendInputData : public QObject
{
    Q_OBJECT
public:
    explicit SendInputData(QObject *parent = nullptr);

public slots:
    void send();

};

#endif // SIGNBUTTON_H
