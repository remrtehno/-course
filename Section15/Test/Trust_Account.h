#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Account.h"

class Trust_Account : public Account
{

protected: 
    static const int withdraw_treshold = 3;
    static const int withdraw_percent_limit = 20;
protected:
    int withdraw_count = 0;
    
public:
    Trust_Account(std::string, double);
    
    bool deposit(double);
    bool withdraw(double);
};

#endif // TRUST_ACCOUNT_H
