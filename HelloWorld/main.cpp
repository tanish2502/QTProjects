#include <QApplication>

#include "standardwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    StandardWindow wnd;
    wnd.show();
    wnd.setWindowTitle("THE STANDARD WINDOW!!");
    return app.exec();
}
