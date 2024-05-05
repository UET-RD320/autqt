#include <QCoreApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QThread>
#include <QTimer>
#include <QFile>
#include <QNetworkAccessManager>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>

QWidget *createWidgetWithLabelAndButton(QWidget *parent) {
    QWidget *widget = new QWidget(parent);
    QVBoxLayout *layout = new QVBoxLayout(widget);
    QLabel *label = new QLabel("Hello, Qt!", widget);
    QPushButton *button = new QPushButton("Click me", widget);
    layout->addWidget(label);
    layout->addWidget(button);
    widget->setLayout(layout);
    return widget;
}


void runTaskInThread() {
    // todo something
}


void readXmlDataFromFile(const QString &fileName) {
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QXmlStreamReader xmlReader(&file);
        while (!xmlReader.atEnd()) {
            if (xmlReader.isStartElement()) {
                //Todo: Xử lý các phần tử XML
            }
            xmlReader.readNext();
        }
        if (xmlReader.hasError()) {
            return
        }
        file.close();
    } else {
        return

    }
}

void writeXmlDataToFile(const QString &fileName) {
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QXmlStreamWriter xmlWriter(&file);
        xmlWriter.setAutoFormatting(true);
        xmlWriter.writeStartDocument();
        xmlWriter.writeStartElement("data");
        xmlWriter.writeEndElement();
        xmlWriter.writeEndDocument();
        file.close();
    } 
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    QApplication app(argc, argv);

    QWidget *widget = createWidgetWithLabelAndButton(nullptr);
    widget->show();
    
    QThread thread;
    QObject::connect(&thread, &QThread::started, [](){
        runTaskInThread();
    });
    thread.start();

    QTimer::singleShot(5000, [](){
        readXmlDataFromFile("data.xml");
    });
    writeXmlDataToFile("output.xml");

    return app.exec();
}
