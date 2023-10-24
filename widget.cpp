#include "widget.h"
#include "ui_widget.h"
#include "setdialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_BtnOpen_clicked()
{
    SetDialog sdl;
    connect(&sdl,&SetDialog::sigAddone,[=](int value){ui->lineEdit->setText(QString::number(value));});
    sdl.exec();//事件循环，会阻塞ui

}

