#include "accountlist.h"
#include <time.h>
#include <string>

using namespace std;


account::account(string ID,string name,string password)
{
    this->id = ID;
    this->name = name;
    this->password = password;
    this->fmoney = 0;
    this->next = NULL;
}


string account::getIDInfo()
{
    return this->id;
}

string account::getNameInfo()
{
    return this->name;
}

float account::getMoneyInfo()
{
    return this->fmoney;
}

void account:: changeMoney(float changeMoney)
{
    this->fmoney += changeMoney;
}
void account::changePassword(string changedPassword)
{
    this->password = changedPassword;
}

account* account::deleteAccount()
{
    return this;
}


accountlist::accountlist() {
    accountNum = 0;
    bankAccountListHead = addAccountID("","");//头节点没有内容
}

account* accountlist::addAccountID(string name,string password)
{
    string id = "";
    srand((unsigned int)time(NULL));
    for(int i = 0 ; i < 19 ;i ++)
    {
        id += (char)(rand()%10 + '0');
    }
    account *newAccount = new account(id,name,password);
    newAccount->next = bankAccountListHead->next;
    bankAccountListHead->next = newAccount;

    return newAccount;
}


int accountlist::removeAccountID(account* deleteAccount)
{
    account* p = bankAccountListHead;

    while(p->next != NULL)
    {
        if(p->next == deleteAccount)
        {
            p->next = deleteAccount->next;
            delete deleteAccount;
            return 1;
        }
    }
    return 0;
}


account* accountlist::getAccount(string accountID)
{
    account* p = bankAccountListHead->next;
    while(p != NULL)
    {
        if(p->id == accountID)
            return p;
    }
    return NULL;
}

int accountlist::transMoney(string sendID,string receiveID,float transMoney)
{
    account* sendAccount = this->getAccount(sendID);
    account* receiveAccount = this->getAccount(receiveID);

    if(sendAccount != NULL && receiveAccount != NULL)
    {
        sendAccount->changeMoney(-1 * transMoney);
        receiveAccount->changeMoney(transMoney);
        return 1;
    }
    return 0;
}










