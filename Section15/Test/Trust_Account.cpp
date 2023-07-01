#include "Trust_Account.h"

using namespace std;

Trust_Account::Trust_Account(std::string name, double amount):  Account{name, amount}
{

}


bool Trust_Account::deposit(double amount) {
    if(amount < 0) {
        return false;
    }
    
    
    if(amount >= 5000) {
        amount += 50.0;
    }
    
    Account::deposit(amount);
//    std::cout << final_amount << "================" << get_balance() << "======"; 


    return true;  
}


bool Trust_Account::withdraw(double amount) {
    if(withdraw_count >= withdraw_treshold) {
        cout << "Withdraw's limit is executed." << endl;
        return false;
    }
    
    double percentage_amount =  (amount / balance) * 100;
    
    if(percentage_amount >= 20) {
        cout << "Withdraw percentage should be lower than 20%" << endl;
        return false;
    }
    
    
    if(Account::withdraw(amount)) {
       withdraw_count++;
        return true;
    }
    
    return false;
}

