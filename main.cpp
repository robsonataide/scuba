#include "scuba.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Scuba w;
    w.show();

    return a.exec();
}
