#include <iostream>
using namespace std;

// Creating a BankAccount class
class BankAccount {
public:
    double balance = 0;

    // Performing deposit operation
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Performing withdrawal operation
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Printing current balance
    void printBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount;
    myAccount.deposit(1000);
    myAccount.withdraw(300);
    myAccount.printBalance();

    return 0;
}
