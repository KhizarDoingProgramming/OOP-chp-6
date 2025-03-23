/*
--PROGRAM NAME: rlch6e4.cpp
--PROGRAM STATEMENT: Create an employee class, basing it on Exercise 4 of Chapter 
4. The member data should comprise an int for storing the employee number and a 
float for storing the employee’s compensation. Member functions should allow the 
user to enter this data and display it. Write a main() that allows the user to 
enter data for three employees and display it.
*/
#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    float salary;

public:
    void getInput() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() const {
        cout << "ID: " << id << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee e1, e2, e3;
    
    cout << "Enter details for 3 employees:\n";
    e1.getInput();
    e2.getInput();
    e3.getInput();
    
    cout << "\nEmployee Details:\n";
    e1.display();
    e2.display();
    e3.display();
    
    return 0;
}
