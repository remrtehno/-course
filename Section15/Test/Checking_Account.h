#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account : public Account
{
    
protected:
    double fee = 1.5;
public:
    Checking_Account(std::string name, double balance, double fee);
    
    bool withdraw(double amount);
};

#endif // CHECKING_ACCOUNT_H
