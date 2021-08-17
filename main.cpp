#include <main.h>

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QGuiApplication::setApplicationName("DV_FVC");
    QGuiApplication::setApplicationVersion("V1.0.0");

    BaseApplication baseApp;
    QCommandLineParser parserCmd;
    baseApp.parserCmdLine(app, parserCmd);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
