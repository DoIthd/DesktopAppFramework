#ifndef BASEAPPLICATION_H
#define BASEAPPLICATION_H

#include <QCommandLineParser>
#include <QGuiApplication>

class BaseApplication
{
public:
    BaseApplication();

    void parserCmdLine(QGuiApplication &app, QCommandLineParser &parserCmd);
};

#endif // BASEAPPLICATION_H
