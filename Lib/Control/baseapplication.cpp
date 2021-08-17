#include "baseapplication.h"

BaseApplication::BaseApplication()
{

}

void BaseApplication::parserCmdLine(QGuiApplication &app,QCommandLineParser &parserCmd)
{
    parserCmd.setApplicationDescription(QGuiApplication::translate("main", "此程序用于数据采集"));  // 设置应用程序描述信息

    parserCmd.addHelpOption();
    parserCmd.addVersionOption();

    parserCmd.setSingleDashWordOptionMode(QCommandLineParser::ParseAsLongOptions);


    QCommandLineOption widthOption(QStringList() << "wid" << "width",
                                       QGuiApplication::translate("main", "Width of the covered area (default is 800)."),
                                       QGuiApplication::translate("main", "width"), "800");
    parserCmd.addOption(widthOption);

    QCommandLineOption heightOption(QStringList() << "hei" << "height",
                                    QGuiApplication::translate("main", "Height of the covered area (default is 480)."),
                                    QGuiApplication::translate("main", "height"), "480");
    parserCmd.addOption(heightOption);

    QCommandLineOption xOption(QStringList() << "x",
                               QGuiApplication::translate("main", "The x coordinate of the covered area (default is 0)."),
                               QGuiApplication::translate("main", "x"), "0");
    parserCmd.addOption(xOption);

    QCommandLineOption yOption(QStringList() << "y",
                               QGuiApplication::translate("main", "The y coordinate of the covered area (default is 0)."),
                               QGuiApplication::translate("main", "y"), "0");
    parserCmd.addOption(yOption);

    QCommandLineOption colorOption(QStringList() << "c" << "color",
                               QGuiApplication::translate("main", "The color of the covered area (default is black)."),
                               QGuiApplication::translate("main", "color"), "black");
    parserCmd.addOption(colorOption);
    parserCmd.process(app);
}
