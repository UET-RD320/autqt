#include <QtWidgets>
#include <QDebug>

QCheckBox *createCheckBox(QWidget &window) {
    QCheckBox *checkBox = new QCheckBox("Check box", &window);
    qDebug() << "Checked box checked: " << checkBox->isChecked();
    return checkBox;
}

QComboBox *createComboBox(QWidget &window) {
    QComboBox *comboBox = new QComboBox(&window);
    comboBox->addItem("Item 1");
    comboBox->addItem("Item 2");
    qDebug() << "Total combo box item: " << comboBox->count();
    return comboBox;
}

QCommandLinkButton *createCommandLinkButton(QWidget &window) {
    QCommandLinkButton *commandLinkButton = new QCommandLinkButton("Command Link Button", &window);
    qDebug() << "Command link button Description: " << commandLinkButton->description();
    return commandLinkButton;
}

QDateEdit *createDateEdit(QWidget &window) {
    QDateEdit *dateEdit = new QDateEdit(&window);
    qDebug() << "Date: " << dateEdit->date();
    return dateEdit;
}

QDateTimeEdit *createDateTimeEdit(QWidget &window) {
    QDateTimeEdit *dateTimeEdit = new QDateTimeEdit(&window);
    qDebug() << "Date and Time: " << dateTimeEdit->dateTime();
    return dateTimeEdit;
}

QDial *createDial(QWidget &window) {
    QDial *dial = new QDial(&window);
    dial->setNotchTarget(359);
    qDebug() << "Notch target: " << dial->notchTarget();
    return dial;
}

QDoubleSpinBox *createDoubleSpinBox(QWidget &window) {
    QDoubleSpinBox *doubleSpinBox = new QDoubleSpinBox(&window);
    doubleSpinBox->setRange(0, 359);
    qDebug() << "Current double spin box value: " << doubleSpinBox->value();
    return doubleSpinBox;
}

QFocusFrame *createFocusFrame(QWidget &window) {
    QFocusFrame *focusFrame = new QFocusFrame(&window);
    qDebug() << "Child widget of frame: " << focusFrame->widget();
    return focusFrame;
}

QFontComboBox *createFontComboBox(QWidget &window) {
    QFontComboBox *fontComboBox = new QFontComboBox(&window);
    qDebug() << "Current combo box font: " << fontComboBox->currentFont();
    return fontComboBox;
}

QLCDNumber *createLCDNumber(QWidget &window) {
    QLCDNumber *lcdNumber = new QLCDNumber(&window);
    lcdNumber->setDigitCount(3);
    qDebug() << "Current lcd number value: " << lcdNumber->value();
    return lcdNumber;
}

QLabel *createLabel(QWidget &window) {
    QLabel *label = new QLabel("Label", &window);
    qDebug() << "Current label text: " << label->text();
    return label;
}

QLineEdit *createLineEdit(QWidget &window) {
    QLineEdit *lineEdit = new QLineEdit("Line edit" ,&window);
    qDebug() << "Current line edit text: " << lineEdit->text();
    return lineEdit;
}

QMenu *createMenu(QWidget &window) {
    QMenu *menu = new QMenu("Menu" ,&window);
    qDebug() << "Current menu title: " << menu->title();
    return menu;
}

QProgressBar *createProgressBar(QWidget &window) {
    QProgressBar *progressBar = new QProgressBar(&window);
    progressBar->setValue(50);
    qDebug() << "Current progress bar value: " << progressBar->value();
    return progressBar;
}

QPushButton *createPushButton(QWidget &window) {
    QPushButton *pushButton = new QPushButton("Push Button", &window);
    qDebug() << "Current push button text: " << pushButton->text();
    return pushButton;
}

QRadioButton *createRadioButton(QWidget &window) {
    QRadioButton *radioButton = new QRadioButton("Radio Button", &window);
    qDebug() << "Current radio button text: " << radioButton->text();
    return radioButton;
}

QScrollArea *createScrollArea(QWidget &window) {
    QScrollArea *scrollArea = new QScrollArea(&window);
    qDebug() << "Current scroll area widget: " << scrollArea->widget();
    return scrollArea;
}

QScrollBar *createScrollBar(QWidget &window) {
    QScrollBar *scrollBar = new QScrollBar(Qt::Horizontal, &window);
    qDebug() << "Current scroll bar size hint: " << scrollBar->sizeHint();
    return scrollBar;
}

QSizeGrip *createSizeGrip(QWidget &window) {
    QSizeGrip *sizeGrip = new QSizeGrip(&window);
    qDebug() << "Current size grip size hint: " << sizeGrip->sizeHint();
    return sizeGrip;
}

QSlider *createSlider(QWidget &window) {
    QSlider *slider = new QSlider(Qt::Horizontal, &window);
    slider->setTickInterval(50);
    qDebug() << "Current slider tick interval: " << slider->tickInterval();
    return slider;
}

QSpinBox *createSpinBox(QWidget &window) {
    QSpinBox *spinBox = new QSpinBox(&window);
    spinBox->setRange(0, 359);
    qDebug() << "Current spin box value: " << spinBox->value();
    return spinBox;
}

QTabBar *createTabBar(QWidget &window) {
    QTabBar *tabBar = new QTabBar(&window);
    tabBar->addTab("Tab 1");
    tabBar->addTab("Tab 2");
    qDebug() << "Current number tab of tab bar: " << tabBar->count();
    return tabBar;
}

QTabWidget *createTabWidget(QWidget &window) {
    QTabWidget *tabWidget = new QTabWidget(&window);
    tabWidget->addTab(new QLabel("Tab 1"), "Tab 1");
    tabWidget->addTab(new QLabel("Tab 2"), "Tab 2");
    qDebug() << "Current number tab of tab widget: " << tabWidget->count();
    return tabWidget;
}

QTimeEdit *createTimeEdit(QWidget &window) {
    QTimeEdit *timeEdit = new QTimeEdit(&window);
    qDebug() << "Current time edit: " << timeEdit->time();
    return timeEdit;
}

QToolBox *createToolBox(QWidget &window) {
    QToolBox *toolBox = new QToolBox(&window);
    toolBox->addItem(new QLabel("Tool Box 1"), "Tool Box 1");
    toolBox->addItem(new QLabel("Tool Box 2"), "Tool Box 2");
    qDebug() << "Current number item of tool box: " << toolBox->count();
    return toolBox;
}

QToolButton *createToolButton(QWidget &window) {
    QToolButton *toolButton = new QToolButton(&window);
    toolButton->setText("Tool Button");
    qDebug() << "Current tool button text: " << toolButton->text();
    return toolButton;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(800, 1000);
    window.setWindowTitle
        (QApplication::translate("widget", "Qt Widget Test"));
    qDebug() << "Window title: " << window.windowTitle();
    window.show();

    QCheckBox *checkBox = createCheckBox(window);
    QComboBox *comboBox = createComboBox(window);
    QCommandLinkButton *commandLinkButton = createCommandLinkButton(window);
    QDateEdit *dateEdit = createDateEdit(window);
    QDateTimeEdit *dateTimeEdit = createDateTimeEdit(window);
    QDial *dial = createDial(window);
    QDoubleSpinBox *doubleSpinBox = createDoubleSpinBox(window);
    QFocusFrame *focusFrame = createFocusFrame(window);
    QFontComboBox *fontComboBox = createFontComboBox(window);
    QLCDNumber *lcdNumber = createLCDNumber(window);
    QLabel *label = createLabel(window);
    QLineEdit *lineEdit = createLineEdit(window);
    QMenu *menu = createMenu(window);
    QProgressBar *progressBar = createProgressBar(window);
    QPushButton *pushButton = createPushButton(window);
    QRadioButton *radioButton = createRadioButton(window);
    QScrollArea *scrollArea = createScrollArea(window);
    QScrollBar *scrollBar = createScrollBar(window);
    QSizeGrip *sizeGrip = createSizeGrip(window);
    QSlider *slider = createSlider(window);
    QSpinBox *spinBox = createSpinBox(window);
    QTabBar *tabBar = createTabBar(window);
    QTabWidget *tabWidget = createTabWidget(window);
    QTimeEdit *timeEdit = createTimeEdit(window);
    QToolBox *toolBox = createToolBox(window);
    QToolButton *toolButton = createToolButton(window);

    // add widget to layout
    QVBoxLayout *verticalLayout = new QVBoxLayout();
    verticalLayout->addWidget(checkBox);
    verticalLayout->addWidget(comboBox);
    verticalLayout->addWidget(commandLinkButton);
    verticalLayout->addWidget(dateEdit);
    verticalLayout->addWidget(dateTimeEdit);
    verticalLayout->addWidget(dial);
    verticalLayout->addWidget(doubleSpinBox);
    verticalLayout->addWidget(focusFrame);
    verticalLayout->addWidget(fontComboBox);
    verticalLayout->addWidget(lcdNumber);
    verticalLayout->addWidget(label);
    verticalLayout->addWidget(lineEdit);
    verticalLayout->addWidget(menu);
    verticalLayout->addWidget(progressBar);
    verticalLayout->addWidget(pushButton);
    verticalLayout->addWidget(radioButton);
    verticalLayout->addWidget(scrollArea);
    verticalLayout->addWidget(scrollBar);
    verticalLayout->addWidget(sizeGrip);
    verticalLayout->addWidget(slider);
    verticalLayout->addWidget(spinBox);
    verticalLayout->addWidget(tabBar);
    verticalLayout->addWidget(tabWidget);
    verticalLayout->addWidget(timeEdit);
    verticalLayout->addWidget(toolBox);
    verticalLayout->addWidget(toolButton);

    window.setLayout(verticalLayout);

    return app.exec();
}
