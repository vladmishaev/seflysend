#include "linkCppQmlModSign.h"
#include <QQmlEngine>

#include "submitSignIn/submitSignIn.h"
#include "submitSignUp/submitSignUp.h"


LinkerCppQmlModulSign::LinkerCppQmlModulSign()
{
    qmlRegisterType<SubmitSignIn>("SubmitSignIn", 1, 0, "SubmitSignIn");
    qmlRegisterType<SubmitSignUp>("SubmitSignUp", 1, 0, "SubmitSignUp");
}






