/*
--PROGRAM STATEMENT: Create a class that includes a data member that holds a 
“serial number” for each object created from the class. That is, the first object 
created will be numbered 1, the second 2, and so on. To do this, you’ll need 
another data member that records a count of how many objects have been created 
so far. (This member should apply to the class as a whole; not to individual 
objects. What keyword specifies this?). Then, as each object is created, its 
constructor can examine this count member variable to determine the appropriate 
serial number for the new object. Add a member function that permits an object 
to report its own serial number. Then write a main() program that creates three 
objects and queries each one about its serial number. They should respond I am 
object number 2,and so on.
*/
#include <iostream>
using namespace std;

class Object {
private:
    static int count;
    int id;

public:
    Object() { id = ++count; }
    void showCount() const { cout << "Total objects created: " << count << endl; }
    void showID() const { cout << "I am object number " << id << endl; }
};

int Object::count = 0;

int main() {
    Object o1, o2, o3;
    o1.showCount();
    
    cout << "Object IDs:\n";
    o1.showID();
    o2.showID();
    o3.showID();
    
    return 0;
}
