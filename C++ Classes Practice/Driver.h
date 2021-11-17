#pragma once
#include "Car.h"

class Driver
{
public:

	//Constructors
	Driver();
	Driver(Car* _car);

	void Drive(int _milesToDrive);

	Car* car;
	int milesToDrive;
};
