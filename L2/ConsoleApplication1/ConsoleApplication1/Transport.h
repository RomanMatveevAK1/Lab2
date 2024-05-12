#pragma once
#include <string>
#include <iostream>
using namespace std;

class Transport
{
private:
	int countWheels;
	double mileage;
	double volumeTank;
	double power;
	double time;
	string name;

    double speed;
    double engineConsumption;

	int reffils;
	double travelTime;
public:
	Transport();
	
	Transport(int _countWheels, double _mileage, double _volumeTank, double _power, double _time, string& _name);

    ~Transport();

    double calcEngineConsumption();

    double calcSpeed();

    void calcTravelTime(double distance);

    void calcRefills(double distance);

	void printCharacter();

	void printReffilsTravelTime();

	double getTravelTime();

	double getReffils();
};

