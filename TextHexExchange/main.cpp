#include "texthexexchange.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextHexExchange w;
    w.show();
    return a.exec();
}
