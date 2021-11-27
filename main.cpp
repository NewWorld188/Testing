#include "mainwindow.h"
#include <QApplication>
#include<iostream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int a;
    cout<<"this is a tesing"<<endl;

    return a.exec();
}
