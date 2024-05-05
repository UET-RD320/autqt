#ifndef QT_FUNCTIONS_H
#define QT_FUNCTIONS_H

#include <QObject>
#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QTimer>
#include <QThread>
#include <QFile>
#include <QNetworkAccessManager>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>

class QtFunctions {
public:
    static QObject* createQObject();
    static QApplication* createQApplication(int &argc, char **argv);
    static QMainWindow* createQMainWindow();
    static QVBoxLayout* createVBoxLayout(QWidget *parent = nullptr);
    static QTimer* createQTimer(QObject *parent = nullptr);
    static QThread* createQThread();
    static QFile* createQFile(const QString &fileName);
    static QNetworkAccessManager* createQNetworkAccessManager(QObject *parent = nullptr);
    static QXmlStreamReader* createQXmlStreamReader(QIODevice *device);
    static QXmlStreamWriter* createQXmlStreamWriter(QIODevice *device);
};

#endif // QT_FUNCTIONS_H
