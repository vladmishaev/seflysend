#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    label = new QLabel("Hello everybody");
    label->setAlignment(Qt::AlignCenter);
    btnQuit = new QPushButton("&Close");
    vbox = new QVBoxLayout();
    vbox->addWidget(label);
    vbox->addWidget(btnQuit);
    setLayout(vbox);
    connect(btnQuit, SIGNAL(clicked()),
            qApp, SLOT(quit()));

}

Widget::~Widget()
{
}

