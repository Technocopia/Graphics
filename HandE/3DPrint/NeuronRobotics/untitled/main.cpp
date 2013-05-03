#include <QApplication>
#include "dialog.h"

int blow(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    
    return a.exec();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
