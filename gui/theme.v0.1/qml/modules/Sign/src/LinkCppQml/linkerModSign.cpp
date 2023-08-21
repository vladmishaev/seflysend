#include "linkerModSign.h"
#include <QQmlEngine>
#include <QDebug>

#include "../SendInputData/main.h"

LinkerQmlCppModulSign::LinkerQmlCppModulSign(){
    qmlRegisterType<SendInputData>("SendInputData", 1, 0, "SendInputData");
}


