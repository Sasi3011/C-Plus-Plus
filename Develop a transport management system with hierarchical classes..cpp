/*Develop a transport management system with hierarchical classes.*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class Transport {
protected:
    string mode;
    int capacity;

public:
    Transport(string m, int c) : mode(m), capacity(c) {}

    virtual void displayInfo() {
        cout << "Mode of Transport: " << mode << endl;
        cout << "Capacity: " << capacity << endl;
    }

    virtual ~Transport() {}
};

// Derived class for Land Transport
class LandTransport : public Transport {
private:
    int numWheels;

public:
    LandTransport(string m, int c, int w) : Transport(m, c), numWheels(w) {}

    void displayInfo() override {
        Transport::displayInfo();
        cout << "Number of Wheels: " << numWheels << endl;
    }
};

// Derived class for Air Transport
class AirTransport : public Transport {
private:
    double maxAltitude;

public:
    AirTransport(string m, int c, double alt) : Transport(m, c), maxAltitude(alt) {}

    void displayInfo() override {
        Transport::displayInfo();
        cout << "Maximum Altitude: " << maxAltitude << " meters" << endl;
    }
};

// Derived class for Water Transport
class WaterTransport : public Transport {
private:
    double maxDepth;

public:
    WaterTransport(string m, int c, double depth) : Transport(m, c), maxDepth(depth) {}

    void displayInfo() override {
        Transport::displayInfo();
        cout << "Maximum Depth: " << maxDepth << " meters" << endl;
    }
};

int main() {
    LandTransport car("Land", 5, 4);
    AirTransport airplane("Air", 180, 12000);
    WaterTransport submarine("Water", 50, 500);

    cout << "Car Details:" << endl;
    car.displayInfo();
    cout << endl;

    cout << "Airplane Details:" << endl;
    airplane.displayInfo();
    cout << endl;

    cout << "Submarine Details:" << endl;
    submarine.displayInfo();
    cout << endl;

    return 0;
}