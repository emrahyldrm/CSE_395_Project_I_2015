#include "mainwindow.h"
#include <QApplication>
#include <QPalette>
#include <QtGui>
#include <QGridLayout>
#include <QFrame>
#include <QImage>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    int x=w.width()*1;
    int y=w.height()*1;
    w.setFixedSize(x,y);


   w.setStyleSheet("background-image: url(images.jpeg);");


    w.show();

    return a.exec();

}
