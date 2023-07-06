#include <iostream>

using namespace std;



class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
};

class Savings_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);    
    bool deposit(double amount) override;
    bool withdraw(double amount) override;
    // Inherits the Account::withdraw method
    
};


class Account2 : public I_Printable {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override {
        os << "Account display";
    }
    virtual ~Account() {  }
};

class Checking: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
     virtual void print(std::ostream &os) const override {
        os << "Checking display";
    }
    virtual ~Checking() {  }
};




// Interface class
class Shape {
public:
    virtual double calculateArea() const = 0;  // Pure virtual function
    virtual void display() const = 0;         // Pure virtual function
    virtual ~Shape() {}                       // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }

    void display() const override {
        std::cout << "Circle: radius = " << radius << std::endl;
    }
};



int main() {
        Account *p1 = Savings_Account {};
    Account *p2 = Savings_Account {"Superman"};
    Account *p3 = Savings_Account {"Batman", 2000};
    
    vector<Account *> sav_accounts {p1,p2,p3};
    
    
    cout << "Hi" << endl;
    return 0;
}