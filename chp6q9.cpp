/*
--PROGRAM STATEMENT: Transform the fraction structure from Exercise 8 in Chapter 4 
into a fraction class. Member data is the fraction’s numerator and denominator. 
Member functions should accept input from the user in the form 3/5, and output 
the fraction’s value in the same format. Another member function should add two 
fraction values. 
Write a main() program that allows the user to repeatedly input two fractions and 
then displays their sum. After each operation, ask whether the user wants to 
continue.
*/
#include <iostream>
using namespace std;

class Fraction {
public:
    int num, den;

    void getInput() {
        char c;
        cin >> num >> c >> den;
    }

    void display() const {
        cout << num << "/" << den << endl;
    }

    void add(const Fraction& f) {
        num = num * f.den + den * f.num;
        den *= f.den;
    }
};

int main() {
    Fraction f1, f2;
    char choice = 'y';
    
    while (tolower(choice) == 'y') {
        cout << "Enter first fraction: ";
        f1.getInput();
        cout << "Enter second fraction: ";
        f2.getInput();
        
        f1.add(f2);
        cout << "Sum: ";
        f1.display();
        
        cout << "Go again (y/n)? ";
        cin >> choice;
    }
    
    return 0;
}
