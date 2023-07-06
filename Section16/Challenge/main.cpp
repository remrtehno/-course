// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
   

    // Savings 
    Savings_Account* p1 = new Savings_Account {};
    Savings_Account* p2 = new Savings_Account {"Superman"};
    Savings_Account* p3 = new Savings_Account {"Batman", 2000};

    std::vector<Account *> sav_accounts {p1, p2, p3};

    

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
   
   // Checking
   
   Checking_Account *p4 = new Checking_Account{};
   Checking_Account *p5 = new Checking_Account{"Kirk"};
   Checking_Account *p6 = new Checking_Account{"Spock", 2000};
   Checking_Account *p7 = new Checking_Account{"Bones", 5000};
   
   
    vector<Account *> check_accounts {p4, p5, p6, p7};

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust
  
    Trust_Account *p8 = new Trust_Account{};
    Trust_Account *p9 = new Trust_Account{"Kirk"};
    Trust_Account *p10 = new Trust_Account {"Athos", 10000, 5.0};
    Trust_Account *p11 = new Trust_Account {"Porthos", 20000, 4.0};
    Trust_Account *p12 = new Trust_Account {"Aramis", 30000};
   
   
    vector<Account *> trust_accounts {p8, p9, p10, p11, p12};


    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(trust_accounts, 1000);
    

    
    return 0;
}

