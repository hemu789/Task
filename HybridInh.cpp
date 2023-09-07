#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    void display()
    {
        cout << "This is a Vehicle." << endl;
    }
};

// Intermediate class 1
class Car : public Vehicle
{
public:
    void display()
    {
        cout << "This is a Car." << endl;
    }
};

// Intermediate class 2
class ElectricVehicle
{
public:
    void display()
    {
        cout << "This is an Electric Vehicle." << endl;
    }
};

// Derived class
class ElectricCar : public Car, public ElectricVehicle
{
public:
    void display()
    {
        cout << "This is an Electric Car." << endl;
    }
};

int main()
{
    ElectricCar myCar;

    myCar.Vehicle::display();         // Accessing base class Vehicle's method
    myCar.Car::display();             // Accessing intermediate class Car's method
    myCar.ElectricVehicle::display(); // Accessing intermediate class ElectricVehicle's method
    myCar.display();                  // Accessing derived class ElectricCar's method

    return 0;
}
