#ifndef SUBMITSIGNIN
#define SUBMITSIGNIN

#include "../interfaceSign/interfaceSign.h"

class SubmitSignIn : public InterfaceSign
{
    Q_OBJECT
public:
    explicit SubmitSignIn(QObject *parent = nullptr);

public slots:
    void send();

};

#endif //SUBMITSIGNIN
