/*
--PROGRAM STATEMENT: Create a class called time that has separate int member 
data for hours, minutes, and seconds. One constructor should initialize this 
data to 0, and another should initialize it to fixed values. Another member 
function should display it, in 11:59:59 format. The final member function should 
add two objects of type time passed as arguments. 
A main() program should create two initialized time objects (should they be const?) 
and one that isn’t initialized. Then it should add the two initialized values 
together, leaving the result in the third time variable. Finally it should display 
the value of this third variable. Make appropriate member functions const.
*/
#include <iostream>
using namespace std;

class Time {
public:
    int h = 0, m = 0, s = 0;

    Time() = default;
    Time(int hh, int mm, int ss) : h(hh), m(mm), s(ss) {}
    
    void getInput() {
        cout << "Enter hours, minutes, and seconds: ";
        cin >> h >> m >> s;
    }
    
    void display() {
        cout << h << ":" << m << ":" << s << endl;
    }
    
    void add(Time t1, Time t2) {
        int totalSeconds = (t1.h * 3600 + t1.m * 60 + t1.s) + (t2.h * 3600 + t2.m * 60 + t2.s);
        h = totalSeconds / 3600;
        m = (totalSeconds % 3600) / 60;
        s = totalSeconds % 60;
    }
};

int main() {
    Time t, t1, t2;
    
    cout << "Enter first time: " << endl;
    t1.getInput();
    cout << "Enter second time: " << endl;
    t2.getInput();
    
    cout << "t1: "; t1.display();
    cout << "t2: "; t2.display();
    
    t.add(t1, t2);
    cout << "t1 + t2 = "; t.display();
    
    return 0;
}
