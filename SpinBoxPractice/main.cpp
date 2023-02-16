#include <QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget* window = new QWidget;
    window->setWindowTitle("Enter your Age");

    QSpinBox* spinBox = new QSpinBox;
    spinBox->setRange(0,130);

    QSlider* slider = new QSlider(Qt::Horizontal);
    slider->setRange(0,130);

    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));


    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinBox, SLOT(setValue(int)));

    spinBox->setValue(23);

    QHBoxLayout* boxLayout = new QHBoxLayout();
    boxLayout->addWidget(spinBox);
    boxLayout->addWidget(slider);
    window->setLayout(boxLayout);
    window->show();

    return app.exec();
}
