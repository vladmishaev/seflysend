#ifndef SUBMITSIGNUP
#define SUBMITSIGNUP

#include "../interfaceSign/interfaceSign.h"

class SubmitSignUp : public InterfaceSign
{
    Q_OBJECT
public:
    explicit SubmitSignUp(QObject *parent = nullptr);

public slots:
    void send();

};

#endif //SUBMITSIGNUP
