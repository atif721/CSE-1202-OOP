#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;
    double withdraw;
public:
    BankAccount(double baalance) : balance(baalance) {}

    double withdrawl(double withdrawn) {
        if (balance < withdrawn) {
            throw 0;
        }
        return (balance - withdrawn);
    }
};

int main() {
    system("cls");

    BankAccount acc1(1000.55);


    try {
        cout << "Withdrawn Ammount : " << acc1.withdrawl(440.35) << endl;
    }
    catch (int e) {
        cout << "Error! Insufficient funds." << endl;
    }

    cout << "" << endl;
    
    try {
        cout << "Withdrawn Ammount : " << acc1.withdrawl(5000.35) << endl;
    }
    catch (int e) {
        cout << "Error! Insufficient funds." << endl;
    }

    return 0;
}
