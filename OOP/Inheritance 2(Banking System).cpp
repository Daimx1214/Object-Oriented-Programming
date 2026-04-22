//2.Implement a class hierarchy for a simple banking system.
//Create a base class called Account with data members accountNumber and balance, and virtual functions 
//deposit() and withdraw() for adding and deducting funds, respectively.
//Derive two classes SavingsAccount and CheckingAccount from Account and implement
// specific functionalities for each type of account.
#include<iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;
public:
    Account(double acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
    virtual void deposit() {}
    virtual void withdraw() {}
};

class SavingsAccount : public Account {
public:
    SavingsAccount(double acc, double bal) : Account(acc, bal) {}
    void deposit() override {
        int amount;
        cout << "Enter your amount you want to add: ";
        cin >> amount;
        if (amount > 0) {
            balance = balance + amount;
            cout << "Your amount is added successfully.\n";
            cout << "Now your balance is " << balance << "\n" << endl;
        } else {
            cout << "Your amount is Invalid.\n";
        }
    }

    void withdraw() override {
        int amount;
        cout << "Enter amount to withdraw from SavingsAccount: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
            cout << "Remaining balance: " << balance << "\n";
        } else {
            cout << "Invalid amount or insufficient balance.\n";
        }
    }
};

class CheckingAccounts : public Account {
public:
    CheckingAccounts(double acc, double bal) : Account(acc, bal) {}

    void deposit() override {
        int amount;
        cout << "Enter your amount you want to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Your amount has been deposited in your bank account.\n";
            cout << "After deposit, your balance is " << balance << "\n";
        } else {
            cout << "Your amount is Invalid.\n";
        }
    }

    void withdraw() override {
        int amount;
        cout << "Enter amount to withdraw from CheckingAccounts: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
            cout << "Remaining balance: " << balance << "\n";
        } else {
            cout << "Invalid amount or insufficient balance.\n";
        }
    }
};

int main() {
    int accNo;
    double bal;

    cout << "Your account number is: ";
    cin >> accNo;
    cout << "Your balance is: ";
    cin >> bal;

    CheckingAccounts obj(accNo, bal);
    obj.deposit();
    obj.withdraw(); 

    return 0;
}
