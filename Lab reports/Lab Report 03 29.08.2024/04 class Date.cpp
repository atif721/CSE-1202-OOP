#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    bool isValidDate(int d, int m, int y) {
        if (y < 1 || m < 1 || m > 12 || d < 1) return false;

        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (isLeapYear(y)) daysInMonth[1] = 29; // February has 29 days in a leap year

        return d <= daysInMonth[m - 1];
    }

public:
    // Default constructor
    Date() : day(1), month(1), year(2000) {}

    // Parameterized constructor
    Date(int d, int m, int y) {
        setDate(d, m, y);
    }

    // Setter method
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date! Setting to default (01/01/2000)." << endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }

    // Getter methods
    int getDay() const {
        return day;
    }
    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }

    // Display the date
    void displayDate() const {
        cout << (day < 10 ? "0" : "") << day << "/"
             << (month < 10 ? "0" : "") << month << "/"
             << year << endl;
    }
};

int main() {
    Date date1; // Default date
    Date date2(31, 12, 2023); // Valid date
    Date date3(29, 2, 2024); // Valid leap year date
    Date date4(30, 2, 2023); // Invalid date

    date1.displayDate(); // Should display 01/01/2000
    date2.displayDate(); // Should display 31/12/2023
    date3.displayDate(); // Should display 29/02/2024
    date4.displayDate(); // Should display 01/01/2000 because the input is invalid

    return 0;
}
