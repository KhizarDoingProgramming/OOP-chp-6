/*
--PROGRAM NAME: rlch6e12.cpp
--PROGRAM STATEMENT: Note that one advantage of the OOP approach is that an 
entire class can be used, without modification, in a different program. Use the 
fraction class from Exercise 11 in a program that generates a multiplication 
table for fractions. Let the user input a denominator, and then generate all 
combinations of two such fractions that are between 0 and 1, and multiply them 
together. Here’s an example of the output if the denominator is 6:
					1/6     1/3    1/2    2/3    5/6
-----------------------------------------
1/6    1/36    1/18   1/12   1/9    5/36
1/3    1/18    1/9    1/6    2/9    5/18
1/2    1/12    1/6    1/4    1/3    5/12
2/3    1/9     2/9    1/3    4/9    5/9
5/6    5/36    5/18   5/12   5/9    25/36
*/
#include <iostream>
#include <iomanip>
using namespace std;

class Fraction {
private:
    int num, den;
public:
    void read() {
        char c;
        cin >> num >> c >> den;
    }
    void display() const {
        cout << setw(2) << num << '/' << setw(2) << den;
    }
    Fraction multiply(const Fraction &f) const {
        return {num * f.num, den * f.den};
    }
};

int main() {
    Fraction f[5];
    cout << "Enter five fractions: \n";
    for (auto &fr : f) fr.read();

    cout << left << setw(8) << "";
    for (auto &fr : f) { fr.display(); cout << "   "; }
    cout << "\n" << string(48, '-') << "\n";

    for (auto &fr1 : f) {
        fr1.display(); cout << "   ";
        for (auto &fr2 : f) {
            fr1.multiply(fr2).display();
            cout << "   ";
        }
        cout << endl;
    }
    return 0;
}
