#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <linkerAllMod.h>




int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    LinkerQmlCppAllMod();

    QQmlApplicationEngine engine;
    engine.addImportPath(":/selfysend.com/imports");
    const QUrl url(u"qrc:/qml/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
