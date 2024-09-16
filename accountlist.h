 /************************************************************************
 * Copyright (C) 2024 yaodan   https://github.com/xingzhi2002
 *
 * @file     accountlist.h
 * @brief     list of struct account
 * @author   yaodan
 * @date     2024-09-06
 ************************************************************************/

#ifndef ACCOUNTLIST_H
#define ACCOUNTLIST_H

#include <string>

using namespace std;

class account
{
public:
    account(string ID,string name,string password);
    string id;

    void changeMoney(float changeMoney);
    void changePassword(string changedPassword);

    string getIDInfo();
    string getNameInfo();
    float getMoneyInfo();
    account* deleteAccount();
    account* next;

private:

    string name;
    string password;
    float fmoney;

};

class accountlist
{
public:
    accountlist();
    int accountNum;
    account* bankAccountListHead;

    account* addAccountID(string name,string password);
    int removeAccountID(account* deletedAccount);

    account* getAccount(string accountID);

    int transMoney(string sendID,string receiveID,float transMoney);

};

#endif // ACCOUNTLIST_H
