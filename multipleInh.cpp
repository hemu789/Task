#include <iostream>
using namespace std;

class Vehicle
{
public:
    void displayType()
    {
        cout << "This is a Vehicle." << endl;
    }
};

class Engine
{
public:
    void startEngine()
    {
        cout << "Engine started." << endl;
    }
};

class Car : public Vehicle, public Engine
{
public:
    void displayCarType()
    {
        cout << "This is a Car." << endl;
    }
};

int main()
{
    Car myCar;

    myCar.displayType();    // Accessing Vehicle's method
    myCar.startEngine();    // Accessing Engine's method
    myCar.displayCarType(); // Accessing Car's method

    return 0;
}
