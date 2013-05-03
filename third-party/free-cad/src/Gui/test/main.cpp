#include <QApplication>
#include "testwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testwidget w;
    w.show();
    
    return a.exec();
}
