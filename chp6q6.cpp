/*
--PROGRAM NAME: rlch6e6.cpp
--PROGRAM STATEMENT: Extend the employee class of Exercise 4 to include a date 
class (see Exercise 5) and an etype enum (see Exercise 6 in Chapter 4). An object 
of the date class should be used to hold the date of first employment; that is, 
the date when the employee was hired. The etype variable should hold the 
employee’s type: laborer, secretary, manager, and so on. These two items will be 
private member data in the employee definition, just like the employee number and 
salary. You’ll need to extend the  getemploy() and putemploy() functions to 
obtain this new information from the user and display it. These functions will 
probably need switch statements to handle the etype variable. 
Write a main() program that allows the user to enter data for three employee 
variables and then displays this data.
*/
#include <iostream>
using namespace std;    
class Date{
    private:
        int day, month, year;   
    public:
        void empDate(){
            cout << "Enter date (D/M/Y): ";
            cin >> day >> month >> year;
        }
        void display(){
            cout<<"This employee joined on: "<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
class Employee: public Date{
    int emp_no;
    string emp_name;
    int emp_comp;
    public:
        void empDetails(){
            cout << "Enter Employee ID: ";
            cin >> emp_no;
            cout << "Enter Employee Name: ";
            cin >> emp_name;
            cout << "Enter Employee Compensation: ";
            cin >> emp_comp;
        }
        void display(){
            cout << "Employee ID: " << emp_no << endl;
            cout << "Employee Name: " << emp_name << endl;
            cout << "Employee Compensation: " << emp_comp << endl;
        }
    };
int main(){
    Employee e;
    e.empDetails();
    e.empDate();
    e.display();
    e.Date::display();
    return 0;
}
