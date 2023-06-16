#ifndef WIDGET_H
#define WIDGET_H

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

class Widget : public QWidget
{
    Q_OBJECT

    public:
        Widget(QWidget *parent = nullptr);
        ~Widget();
    private:
        QLabel *label;
        QPushButton *btnQuit;
        QVBoxLayout *vbox;
};
#endif // WIDGET_H
