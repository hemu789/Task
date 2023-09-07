#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

// Derived class inheriting from Vehicle
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is being driven." << endl;
    }
};

int main() {
    Car myCar;

    // Accessing base class method from derived class object
    myCar.startEngine();
    myCar.drive();

    return 0;
}
