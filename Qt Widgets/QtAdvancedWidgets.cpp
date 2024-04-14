#include <QtWidgets>
#include <QDebug>

QCalendarWidget *createCalendarWidget(QWidget &window) {
    QCalendarWidget *calendarWidget = new QCalendarWidget(&window);
    qDebug() << "Current calendar widget date: " << calendarWidget->selectedDate();
    return calendarWidget;
}

QColumnView *createColumnView(QWidget &window) {
    QColumnView *columnView = new QColumnView(&window);
    qDebug() << "Current column view widths: " << columnView->columnWidths();
    return columnView;
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.resize(800, 1000);
    window.setWindowTitle
        (QApplication::translate("widget", "Qt Widget Test"));
    qDebug() << "Window title: " << window.windowTitle();
    window.show();

    QCalendarWidget *calendarWidget = createCalendarWidget(window);
    QColumnView *columnView = createColumnView(window);

    // add widget to layout
    QVBoxLayout *verticalLayout = new QVBoxLayout();
    verticalLayout->addWidget(calendarWidget);
    verticalLayout->addWidget(columnView);

    window.setLayout(verticalLayout);

    return app.exec();
}