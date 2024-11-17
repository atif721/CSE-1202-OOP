#include <iostream>

using namespace std;

int TestValidAge(int age) {

    if (age < 0 || age >= 150) {
        throw 0;
    }
    return age;
}

int main() {
    system("cls");

    int age;

    cout << "Enter Age : ";
    cin >> age;

    try {
        int value = TestValidAge(age);
        cout << "Entered Age is : " << age << endl;
    }
    catch (int e) {
        cout << "Error! Invalid age entered." << endl;
    }

    cout << endl << "Enter Age : ";
    cin >> age;

    try {
        int value = TestValidAge(age);
        cout << "Entered Age is : " << age << endl;
    }
    catch (int e) {
        cout << "Error! Invalid age entered." << endl;
    }

    return 0;
}
