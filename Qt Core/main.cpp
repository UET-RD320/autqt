#include <QCoreApplication>
#include <QDebug>
#include "qt_functions.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Tạo ứng dụng Qt
    QApplication *app = QtFunctions::createQApplication(argc, argv);

    // Tạo một QMainWindow
    QMainWindow *window = QtFunctions::createQMainWindow();
    window->resize(400, 300);
    window->show();

    // Tạo QVBoxLayout và thêm nó vào QMainWindow
    // window có kiểu là QWidget , QMainWindow là lớp con của QWidget
    // QWidget không thế khởi tạo trực tiếp
    QVBoxLayout *layout = QtFunctions::createVBoxLayout(window);
    QLabel *label = new QLabel("Hello, Qt!", window);
    layout->addWidget(label);

    QTimer *timer = QtFunctions::createQTimer();

    QObject::connect(timer, &QTimer::timeout, [&label]() {
        static int count = 0;
        label->setText("Timer ticked " + QString::number(++count) + " times");
    });

    timer->start(1000); // Mỗi giây

    int result = app->exec();

    
    delete timer;
    delete layout;
    delete window;
    delete app;

    return result;
}
