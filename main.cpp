#include "int_temp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Int_Temp w;
    w.show();
    return a.exec();
}
