#include "Car.h"
#include <iostream>
#include <string>

//Constructor
Car::Car()
	: make("")
	, model("")
	, noOfDoors(0)
	, mileage(0)
	, milesPerGallon(0)
	, petrolLevel(0)
	, petrolTankSize(0)
{

}

//From Car.h (constructor with values)
Car::Car(std::string _make, std::string _model, int _noOfDoors, int _mileage, int _milesPerGallon, int _petrolLevel, int _petrolTankSize)

	: make(_make)
	, model(_model)
	, noOfDoors(_noOfDoors)
	, mileage(_mileage)
	, milesPerGallon(_milesPerGallon)
	, petrolLevel(_petrolLevel)
	, petrolTankSize(_petrolTankSize)
{

}

Car::Car(std::string _make, std::string _model)
	: make(_make)
	, model(_model)
{
	mileage = 60;
	petrolTankSize = 50;

	if (_make == "Best Company")
	{
		noOfDoors = 5;
		milesPerGallon = 100;
		petrolLevel = 100;
	}
	else if (_make == "Worst Company")
	{
		noOfDoors = 3;
		milesPerGallon = 10;
		petrolLevel = 1;
	}
	else 
	{
		noOfDoors = 3;
		milesPerGallon = 50;
		petrolLevel = 5;
	}
}


void Car::Print()
{
	std::cout << "Make: " << make << "\n";
	std::cout << "Model: " << model << "\n";
	std::cout << "Number of doors: " << noOfDoors << "\n";
	std::cout << "Mileage: " << mileage << "\n";
	std::cout << "Miles per gallon: " << milesPerGallon << "\n";
	std::cout << "Petrol Level: " << petrolLevel << "\n\n";
}

void Car::Drive(int _milesToDrive)
{
	std::cout << "\nMileage before test driving: " << mileage;
	mileage += _milesToDrive;
	petrolLevel = milesPerGallon / _milesToDrive;
	std::cout << "\nMileage after test driving: " << mileage;
}

void Car::TestDrive(Car &car)
{
	car.Drive(3);
}

int Car::GetPetrolLevel()
{
	return petrolLevel;
}

void Car::SetPetrolLevel(int _petrolLevel)
{
	petrolLevel = _petrolLevel;
}
