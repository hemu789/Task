#include <iostream>

using namespace std;

// Base class
class Vehicle
{
public:
    void startEngine()
    {
        cout << "Engine started." << endl;
    }
};

// Derived class 1
class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is being driven." << endl;
    }
};

// Derived class 2
class Motorcycle : public Vehicle
{
public:
    void ride()
    {
        cout << "Motorcycle is being ridden." << endl;
    }
};

int main()
{
    Car car;
    Motorcycle motorcycle;

    car.startEngine();
    car.drive();

    motorcycle.startEngine();
    motorcycle.ride();

    return 0;
}
