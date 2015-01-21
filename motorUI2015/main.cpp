#include "motorui2015.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    motorUI2015 w;
    w.show();

    return a.exec();
}
