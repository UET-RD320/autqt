#include "qt_functions.h"

QObject* QtFunctions::createQObject() {
    return new QObject();
}

QApplication* QtFunctions::createQApplication(int &argc, char **argv) {
    return new QApplication(argc, argv);
}

QMainWindow* QtFunctions::createQMainWindow() {
    return new QMainWindow();
}

QVBoxLayout* QtFunctions::createVBoxLayout(QWidget *parent) {
    return new QVBoxLayout(parent);
}

QTimer* QtFunctions::createQTimer(QObject *parent) {
    return new QTimer(parent);
}

QThread* QtFunctions::createQThread() {
    return new QThread();
}

QFile* QtFunctions::createQFile(const QString &fileName) {
    return new QFile(fileName);
}

QNetworkAccessManager* QtFunctions::createQNetworkAccessManager(QObject *parent) {
    return new QNetworkAccessManager(parent);
}

QXmlStreamReader* QtFunctions::createQXmlStreamReader(QIODevice *device) {
    return new QXmlStreamReader(device);
}

QXmlStreamWriter* QtFunctions::createQXmlStreamWriter(QIODevice *device) {
    return new QXmlStreamWriter(device);
}
