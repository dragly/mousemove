#include <QtGui/QGuiApplication>
#include <QtQuick>
#include "qtquick2applicationviewer.h"
#include "mousemover.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;

    MouseMover mouseMover(&viewer);
    viewer.rootContext()->setContextProperty("mouseMover", &mouseMover);

    viewer.setMainQmlFile(QStringLiteral("qml/mousemove/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
