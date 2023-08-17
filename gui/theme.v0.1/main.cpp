#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "qml/modules/Sign/src/SendInputData/main.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<SendInputData>("SendInputData",1, 0, "SendInputData");

    QQmlApplicationEngine engine;
    engine.addImportPath(":/scythestudio.com/imports");
    const QUrl url(u"qrc:/qml/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
