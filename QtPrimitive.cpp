#include <QString>
#include <QByteArray>
#include <QVariant>
#include <QColor>
#include <QRect>
#include <QDebug>

QString concatenateStrings(const QString &str1, const QString &str2) {
    return str1 + str2;
}

QByteArray appendByteArrays(const QByteArray &byteArray1, const QByteArray &byteArray2) {
    return byteArray1 + byteArray2;
}

QVariant addVariants(const QVariant &variant1, const QVariant &variant2) {
    return variant1.toInt() + variant2.toInt();
}

QColor mixColors(const QColor &color1, const QColor &color2) {
    return QColor((color1.red() + color2.red()) / 2,
                  (color1.green() + color2.green()) / 2,
                  (color1.blue() + color2.blue()) / 2);
}

QRect translateRect(const QRect &rect, int dx, int dy) {
    return rect.translated(dx, dy);
}

int main() {
    // Test QString
    QString myString1 = "Hello, ";
    QString myString2 = "world!";
    QString resultString = concatenateStrings(myString1, myString2);
    qDebug() << "Concatenated string:" << resultString;

    // Test QByteArray
    QByteArray myByteArray1 = "Hello, ";
    QByteArray myByteArray2 = "world!";
    QByteArray resultByteArray = appendByteArrays(myByteArray1, myByteArray2);
    qDebug() << "Concatenated byte array:" << resultByteArray;

    // Test QVariant
    QVariant myVariant1 = 10;
    QVariant myVariant2 = 20;
    QVariant resultVariant = addVariants(myVariant1, myVariant2);
    qDebug() << "Sum of variants:" << resultVariant.toInt();

    // Test QColor
    QColor color1(Qt::red);
    QColor color2(Qt::blue);
    QColor resultColor = mixColors(color1, color2);
    qDebug() << "Mixed color:" << resultColor.name();

    // Test QRect
    QRect myRect(0, 0, 100, 100);
    QRect resultRect = translateRect(myRect, 10, 10);
    qDebug() << "Translated rectangle:" << resultRect;

    return 0;
}
