#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    unique_ptr<Account> ptr;
    
    try {        
//        ptr = make_unique<Checking_Account>("Test", -1);
        
        ptr = make_unique<Checking_Account>("Test", 100);
        ptr->withdraw(200);
        

        cout << *ptr;

        
        
    } catch(const IllegalBalanceException &ex) {
          std::cout << ex.what() << std::endl;
    }
    
    catch(const InsufficentFundsException &ex) {
          std::cout << ex.what() << std::endl;
    }
    
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

