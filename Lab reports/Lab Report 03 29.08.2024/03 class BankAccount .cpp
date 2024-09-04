#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account number and initial balance
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " into account " << accountNumber << ".\n";
        } else {
            cout << "Deposit amount must be positive.\n";
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " from account " << accountNumber << ".\n";
        } else if (amount > balance) {
            cout << "Insufficient funds for withdrawal.\n";
        } else {
            cout << "Withdrawal amount must be positive.\n";
        }
    }

    // Function to display the current balance
    void displayBalance() const {
        cout << "Account " << accountNumber << " has a balance of $" << balance << ".\n";
    }
};

int main() {
    // Create a BankAccount object with an account number and initial balance
    BankAccount account(123456, 1000.0);

    // Deposit money
    account.deposit(500.0);
    account.displayBalance();

    // Withdraw money
    account.withdraw(200.0);
    account.displayBalance();

    // Attempt to withdraw more money than available
    account.withdraw(1500.0);
    account.displayBalance();

    return 0;
}
