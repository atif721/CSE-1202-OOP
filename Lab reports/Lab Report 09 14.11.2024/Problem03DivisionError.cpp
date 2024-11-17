#include<iostream>
using namespace std;

double Division(double num1, double num2) {
    if (num2 == 0) {
        throw 0;
    }

    return (num1 / num2);
}

int main() {
    system("cls");

    cout << "Output 1..." << endl;
    try {
        double result = Division(30, 15);
        cout << "Result : " << result << endl;
    }
    catch (int i) {
        cout << "Error! Divsion by " << i << " is not allowed" << endl;
    }

    cout << endl << "Output 2..." << endl;

    try {
        double result = Division(15, 0);
        cout << "Result : " << result;
    }
    catch (int i) {
        cout << "Error! Divsion by " << i << " is not allowed" << endl;
    }

    return 0;
}