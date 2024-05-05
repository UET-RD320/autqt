#include <QDebug>
#include <QList>
#include <QMap>
#include <QVector>
#include <QDateTime>
#include <QUrl>

void printIntList(const QList<int> &intList) {
    qDebug() << "Integer list:";
    for (int i : intList) {
        qDebug() << i;
    }
}

void printStringMap(const QMap<QString, QString> &stringMap) {
    qDebug() << "String map:";
    for (auto it = stringMap.begin(); it != stringMap.end(); ++it) {
        qDebug() << it.key() << ":" << it.value();
    }
}

void printDoubleVector(const QVector<double> &doubleVector) {
    qDebug() << "Double vector:";
    for (double d : doubleVector) {
        qDebug() << d;
    }
}

void printDateTime(const QDateTime &dateTime) {
    qDebug() << "Date and time:";
    qDebug() << "Date:" << dateTime.date();
    qDebug() << "Time:" << dateTime.time();
}

void printUrlList(const QList<QUrl> &urlList) {
    qDebug() << "URL list:";
    for (const QUrl &url : urlList) {
        qDebug() << url;
    }
}

int main() {
    QList<int> myIntList = {1, 2, 3, 4, 5};
    printIntList(myIntList);

    QMap<QString, QString> myStringMap = {{"name", "John"}, {"age", "30"}, {"city", "New York"}};
    printStringMap(myStringMap);

    QVector<double> myDoubleVector = {3.14, 2.718, 1.618};
    printDoubleVector(myDoubleVector);

    QDateTime myDateTime = QDateTime::currentDateTime();
    printDateTime(myDateTime);

    QList<QUrl> myUrlList = {QUrl("https://www.facebook.com"), QUrl("https://www.qt.io")};
    printUrlList(myUrlList);

    return 0;
}
