/*
--PROGRAM STATEMENT: Create a class that imitates part of the functionality of the 
basic data type int. Call the class Int (note different capitalization). The only 
data in this class is an int variable. Include member functions to initialize an 
Int to 0, to initialize it to an  int value, to display it (it looks just like an 
int), and to add two Int values. Write a program that exercises this class by 
creating one uninitialized and two initialized Int values, adding the two 
initialized values and placing the response in the uninitialized value, and then 
displaying this result.
*/


#include <iostream>
using namespace std;

class Int {
private:
    int a;

public:
    Int() { a = 0; }
    Int(int x) { a = x; }

    void getValues() {
        cout << "Enter a value: ";
        cin >> a;
    }

    void add(Int x, Int y) {
        a = x.a + y.a;
    }

    void display() {
        cout << "The sum is: " << a << endl;
    }
};

int main() {
    Int i1, i2, i3;
    
    cout << "Enter first number:" << endl;
    i1.getValues();
    
    cout << "Enter second number:" << endl;
    i2.getValues();
    
    i3.add(i1, i2);
    i3.display();

    return 0;
}
