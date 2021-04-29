#include "kompositor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    system ("chcp 1252");
    QApplication a(argc, argv);
    Kompositor w;
    w.show();

    return a.exec();

}

