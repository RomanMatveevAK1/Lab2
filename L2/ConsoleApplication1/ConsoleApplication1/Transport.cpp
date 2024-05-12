#include "Transport.h"
Transport::Transport() {
    countWheels = 0;
    mileage = 0;
    volumeTank = 0;
    power = 0;
    time = 0;
    name = "";

    speed = 0;
    engineConsumption = 0;

    travelTime = 0;
    reffils = 0;
}

Transport::Transport(int _countWheels, double _mileage, double _volumeTank, double _power, double _time, string& _name) {
    countWheels = _countWheels;
    mileage = _mileage;
    volumeTank = _volumeTank;
    power = _power;
    time = _time;
    name = _name;

    speed = calcSpeed();
    engineConsumption = calcEngineConsumption(); 
    travelTime = 0;
    reffils = 0;
}

Transport::~Transport() {
    cout << "Deleting transport " << name << endl;
}

double Transport::calcEngineConsumption() {
    return power * 0.5;
}

double Transport::calcSpeed() {
    return power * 0.5 / countWheels;
}

void Transport::calcTravelTime(double distance) {
    travelTime = distance / calcSpeed();
}

void Transport::calcRefills(double distance) {
    reffils = (int)round(distance / (volumeTank * calcEngineConsumption()));
}

void Transport::printCharacter() {
    cout << countWheels << "\t\t" << power << "\t"
        << speed << "\t" << engineConsumption << endl;
}

void Transport::printReffilsTravelTime() {
    cout << name << "\t" << travelTime << "\t"
        << reffils << endl;
}

double Transport::getTravelTime() {
    return travelTime;
}

double Transport::getReffils() {
    return reffils;
}