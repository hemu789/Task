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

// Intermediate class derived from Vehicle
class Bicycle : public Vehicle
{
public:
    void pedal()
    {
        cout << "Pedaling the bicycle." << endl;
    }
};

// Derived class derived from Bicycle
class MountainBike : public Bicycle
{
public:
    void rideOffroad()
    {
        cout << "Riding the mountain bike offroad." << endl;
    }
};

int main()
{
    // Create an object of MountainBike
    MountainBike mountainBike;

    // Access methods from all levels of inheritance
    mountainBike.startEngine(); // Inherited from Vehicle
    mountainBike.pedal();       // Inherited from Bicycle
    mountainBike.rideOffroad(); // Inherited from MountainBike

    return 0;
}
