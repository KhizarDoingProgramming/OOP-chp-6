/*
--PROGRAM STATEMENT: Start with the date structure in Exercise 5 in Chapter 4 and 
transform it into a date class. Its member data should consist of three ints: 
month, day, and year. It should also have two member functions: getdate(), which 
allows the user to enter a date in 12/31/02 format, and showdate(), which displays 
the date.
*/
#include <iostream>
using namespace std;

class Date {
public:
    int day = 1, month = 1, year = 1920;

    void getInput() {
        char c;
        cout << "Enter date (D/M/Y): ";
        cin >> day >> c >> month >> c >> year;
    }

    void display() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d;
    d.getInput();
    d.display();
    return 0;
}
