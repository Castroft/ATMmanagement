    /************************************************************************
 * Copyright (C) 2024 yaodan   https://github.com/xingzhi2002
 *
 * @file     main.cpp
 * @brief    main file
 * @author   yaodan
 * @date     2024-09-06
 ************************************************************************/

#include "mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <qsqlquery.h>

#include <QApplication>

    QSqlDatabase db;
    int transID;
    float transMoney;
    QString transName;
    QString transPassword;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug() << QSqlDatabase::drivers();
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("atm");
    db.setUserName("root");
    db.setPassword("123456");
    bool ok = db.open();
    transID = -1;

    if(ok)
    {
        qDebug() << "success to connect database";

    }
    else
    {
        qDebug() << "fail to connect database" ;
    }
    // QSqlQuery db_cursor(db);
    // QString cmd = QString("select * from account");
    // db_cursor.exec(cmd);
    // if(db_cursor.size() == -1){
    //     qDebug() << QString("数据表 <table_name> 操作异常，请检查... ");
    //     return 0;
    // }else if(db_cursor.size() == 0){
    //     qDebug() << QString("数据表 <table_name> 没有数据，请检查... ");
    //     return 0;
    // }else{
    //     while(db_cursor.next()){
    //         int accountId = db_cursor.value(0).toInt();
    //         QString accountName = db_cursor.value(1).toString();
    //         QString accountPassword = db_cursor.value(2).toString();
    //         float accountMoney =  db_cursor.value(3).toFloat();
    //         qDebug() << accountId << accountName;
    //     }

    // }
    /***
    //数据插入
    QSqlQuery query(db);
    bool re = query.exec("INSERT INTO account(id,name,password) VALUES(0,'YAODAN','123456')");
    if(!re)
    {
        qDebug() << "insert fail";
    }else
    {
        qDebug() << "insert success";
    }

    //数据查询
    QSqlQuery db_cursor(db);
    QString cmd = QString("select * from account");
    db_cursor.exec(cmd);
    if(db_cursor.size() == -1){
        qDebug() << QString("数据表 <table_name> 操作异常，请检查... ");
        return 0;
    }else if(db_cursor.size() == 0){
        qDebug() << QString("数据表 <table_name> 没有数据，请检查... ");
        return 0;
    }else{
        while(db_cursor.next()){
            int  col0= db_cursor.value(0).toInt();
            QString col1= db_cursor.value(1).toString();
        }
    }

    ***/
    return a.exec();

}
