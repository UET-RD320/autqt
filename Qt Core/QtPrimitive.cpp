#include <QtCore>
#include <QtGui>
#include <QDebug>

/*
link: https://doc.qt.io/qt-6/qtqml-cppintegration-data.html
Qt Type
bool
unsigned int, int	
double	
float, qreal	
QString	*
QUrl
QColor *
QFont
QDateTime
QPoint, QPointF
QSize, QSizeF
QRect, QRectF *
QMatrix4x4	
QQuaternion	
QVector2D, QVector3D, QVector4D	
Enums declared with Q_ENUM()
*/

void checkBoolValue(bool value) {
    if (value) {
        qDebug() << "Value is true";
    } else {
        qDebug() << "Value is false";
    }
}

int addIntegers(int a, int b) {
    return a + b;
}

unsigned int addUnsignedIntegers(unsigned int a, unsigned int b) {
    return a + b;
}

double power(double base, double exponent) {
    return qPow(base, exponent);
}

float addFloats(float a, float b) {
    return a + b;
}

qreal multiplyReals(qreal a, qreal b) {
    return a * b;
}

QString concatenateStrings(const QString &str1, const QString &str2) {
    return str1 + str2;
}

QString toUpperCase(const QString &str) {
    return str.toUpper();
}

bool isValidUrl(const QUrl &url) {
    return url.isValid();
}

QString extractPathFromUrl(const QUrl &url) {
    return url.path();
}

QColor createColor(int red, int green, int blue) {
    return QColor(red, green, blue);
}

void getColorValues(const QColor &color, int &red, int &green, int &blue) {
    red = color.red();
    green = color.green();
    blue = color.blue();
}

QFont createFont(const QString &family, int size, bool bold, bool italic) {
    QFont font(family, size);
    font.setBold(bold);
    font.setItalic(italic);
    return font;
}

QDateTime getCurrentDateTime() {
    return QDateTime::currentDateTime();
}

int compareDateTimes(const QDateTime &dateTime1, const QDateTime &dateTime2) {
    return dateTime1.compare(dateTime2);
}

QPoint createPoint(int x, int y) {
    return QPoint(x, y);
}

QPoint translatePoint(const QPoint &point, int dx, int dy) {
    return point + QPoint(dx, dy);
}

int calculateArea(const QSize &size) {
    return size.width() * size.height();
}

QSize createSize(int width, int height) {
    return QSize(width, height);
}

int calculateArea(const QRect &rect) {
    return rect.width() * rect.height();
}

bool isIntersecting(const QRect &rect1, const QRect &rect2) {
    return rect1.intersects(rect2);
}

QMatrix4x4 createRotationMatrix(float angle, const QVector3D &axis) {
    QMatrix4x4 matrix;
    matrix.setToIdentity();
    matrix.rotate(angle, axis);
    return matrix;
}

QQuaternion createQuaternion(float angle, const QVector3D &axis) {
    return QQuaternion::fromAxisAndAngle(axis, angle);
}

QVector3D addVectors(const QVector3D &vec1, const QVector3D &vec2) {
    return vec1 + vec2;
}

QString enumToString(MyEnumType enumValue) {
    QMetaEnum metaEnum = QMetaEnum::fromType<MyEnumType>();
    return QString::fromLatin1(metaEnum.valueToKey(enumValue));
}