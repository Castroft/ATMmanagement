/************************************************************************
 * Copyright (C) 2024 yaodan   https://github.com/xingzhi2002
 *
 * @file     mainwindow.cpp
 * @brief    main window to show
 * @author   yaodan
 * @date     2024-09-06
 ************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sign/load.h"
#include "sign/signup.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <qsqlquery.h>

extern QSqlDatabase db;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(this->width(),this->height());

}

MainWindow::~MainWindow()
{
    delete ui;
    db.close();
}
 // sign up
void MainWindow::on_commandLinkButton_2_clicked()
{
    this->close();
    signUp *signup_ui = new signUp();
    signup_ui->show();
}

// sign in
void MainWindow::on_commandLinkButton_clicked()
{
    this->close();
    load *load_ui = new load();
    load_ui->show();
}

