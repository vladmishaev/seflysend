#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget window;
    window.setWindowTitle("selfysend");
    window.resize(450, 70);
    window.show();
    return a.exec();
}
