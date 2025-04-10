/*
--PROGRAM STATEMENT: Imagine a tollbooth at a bridge. Cars passing by the booth 
are expected to pay a 50 cent toll. Mostly they do, but sometimes a car goes by 
without paying. The tollbooth keeps track of the number of cars that have gone by, 
and of the total amount of money collected.Model this tollbooth with a class 
called  tollBooth. The two data items are a type unsigned int to hold the total 
number of cars, and a type double to hold the total amount of money collected. A 
constructor initializes both of these to 0. A member function called payingCar() 
increments the car total and adds 0.50 to the cash total. Another function, called 
nopayCar(),increments the car total but adds nothing to the cash total. Finally, 
a member function called display() displays the two totals. Make appropriate 
member functions const. Include a program to test this class. This program should 
allow the user to push one key to count a paying car, and another to count a 
nonpaying car. Pushing the Esc key should cause the program to print out the total 
cars and total cash and then exit.
*/
#include <iostream>
using namespace std;

class TollBooth {
private:
    unsigned int cars = 0;
    double money = 0.0;

public:
    void payingCar() {
        cars++;
        money += 0.50;
        cout << "A paying car passed. Total cars: " << cars << ", Total money: " << money << endl;
    }

    void nopayCar() {
        cars++;
        cout << "A non-paying car passed. Total cars: " << cars << endl;
    }

    void display() {
        cout << "Final count - Total cars: " << cars << ", Total money: " << money << endl;
    }
};

int main() {
    char key;
    TollBooth t;
    cout << "Press 'p' for paying car, 'n' for non-paying car, 'd' to display total, 'ESC' to escape: ";
    while (true) {
        cin >> key;
        if (key == 'p') {
            t.payingCar();
        } else if (key == 'n') {
            t.nopayCar();
        } else if (key == 'd') {
            t.display();
        } else if (key == 27) { 
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }
    cout << "Exiting program." << endl;
    return 0;
}
