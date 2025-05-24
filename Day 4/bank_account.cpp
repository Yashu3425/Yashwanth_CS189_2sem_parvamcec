#include <iostream>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string holderName;
    double balance;

public:
   
    BankAccount(int accNum, string name, double bal) {
        accountNumber = accNum;
        holderName = name;
        balance = bal;
    }

   
    void deposit(double amount) {
        balance += amount;
    }

   
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    
    BankAccount account(1001, "Yashwanth", 500.00);

    
    account.deposit(250.00);
    account.withdraw(100.00);
    account.display();

    return 0;
}