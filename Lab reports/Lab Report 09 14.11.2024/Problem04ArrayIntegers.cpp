#include <iostream>

using namespace std;

int accessArrayElement(int arr [], int index) {

    if (index < 0 || index >= 5) {
        throw 0;
    }
    return arr[index];
}

int main() {
    system("cls");

    int arr[5] = { 10, 20, 30, 40, 50 };

    int index;

    cout << "Enter Index (0 to 4) : ";
    cin >> index;

    try {
        int value = accessArrayElement(arr, index);
        cout << "Element at index " << index << " is " << value << endl;
    }
    catch (int e) {
        cout << "Error! Array index out of bounds. " << endl;
    }

    cout << endl << "Enter Index (0 to 4) : ";
    cin >> index;

    try {
        int value = accessArrayElement(arr, index);
        cout << "Element at index " << index << " is " << value << endl;
    }
    catch (int e) {
        cout << "Error! Array index out of bounds. " << endl;
    }

    return 0;
}
