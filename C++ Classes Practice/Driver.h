#pragma once
#include "Car.h"

class Driver
{
public:

	//Constructors
	Driver();
	Driver(Car* _car);

	void Drive(int _milesToDrive);

private:
	Car* car;
	int milesToDrive;
};
