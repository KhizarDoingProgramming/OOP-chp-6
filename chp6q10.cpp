/*
--PROGRAM STATEMENT: Create a class called  ship that incorporates a ship’s 
number and location. Use the approach of Exercise 8 to number each ship object 
as it is created. Use two variables of the angle class from Exercise 7 to 
represent the ship’s latitude and longitude. A member function of the ship class 
should get a position from the user and store it in the object; another should 
report the serial number and position. Write a main() program that creates 
three ships, asks the user to input the position of each, and then displays each 
ship’s number and position.
*/
#include <iostream>
using namespace std;

class Angle {
public:
    int degrees;
    float minutes;
    char direction;

    void getInput() {
        cout << "Enter degrees, minutes, and direction (E/W/N/S): ";
        cin >> degrees >> minutes >> direction;
        direction = toupper(direction);
    }

    void display() const {
        cout << degrees << "\u00B0" << minutes << "' " << direction;
    }
};

class Position {
public:
    Angle longitude, latitude;

    void getInput() {
        cout << "Enter Longitude: "; longitude.getInput();
        cout << "Enter Latitude: "; latitude.getInput();
    }

    void display() const {
        longitude.display();
        cout << " ";
        latitude.display();
    }
};

class Ship {
private:
    static int count;
    int id;
    Position pos;

public:
    Ship() { id = ++count; }
    void getPosition() { pos.getInput(); }
    void display() const {
        cout << "Ship " << id << " Position: ";
        pos.display();
        cout << endl;
    }
};

int Ship::count = 0;

int main() {
    Ship s1, s2, s3;
    
    s1.getPosition();
    s2.getPosition();
    s3.getPosition();
    
    cout << "\nShip Positions:\n";
    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}
