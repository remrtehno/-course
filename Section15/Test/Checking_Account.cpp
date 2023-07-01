#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double feeArg): Account(name, balance), fee{feeArg}
{
    
}


bool Checking_Account::withdraw(double amount) {
    return Account::withdraw(amount + fee);
}

