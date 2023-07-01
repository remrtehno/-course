// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
//    vector<Account> accounts;
//    accounts.push_back(Account {});
//    accounts.push_back(Account {"Larry"});
//    accounts.push_back(Account {"Moe", 2000} );
//    accounts.push_back(Account {"Curly", 5000} );
//    
//    display(accounts);
//    deposit(accounts, 1000);
//    withdraw(accounts,2000);
//    
//    // Savings 
//
//    vector<Savings_Account> sav_accounts;
//    sav_accounts.push_back(Savings_Account {} );
//    sav_accounts.push_back(Savings_Account {"Superman"} );
//    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
//    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );
//
//    display(sav_accounts);
//    deposit(sav_accounts, 1000);
//    withdraw(sav_accounts, 2000);


   //Checking
    vector<Checking_Account> checking_accounts;
    Checking_Account p {"Wonderwoman", 5000, 25};  
    checking_accounts.push_back(p);
    
    display(checking_accounts);
    deposit(checking_accounts, 1000);
    withdraw(checking_accounts, 2000);


    //Trust Account
    vector<Trust_Account> tr_accounts;
    tr_accounts.push_back(Trust_Account {"Moe", 5000} );
    tr_accounts.push_back(Trust_Account {"Curly", 6000} );
    
    display(tr_accounts);
    deposit(tr_accounts, 5500);
    deposit(tr_accounts, 75);
    
    withdraw(tr_accounts, 7000);
    withdraw(tr_accounts, 1000);
    withdraw(tr_accounts, 1000);
    withdraw(tr_accounts, 1000);
    withdraw(tr_accounts, 1000);
    
    
    return 0;
}

