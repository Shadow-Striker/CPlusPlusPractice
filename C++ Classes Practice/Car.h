#pragma once

#include <string>
#include <iostream>

/*
C++ Classes - Practice ProblemsF86A35 - Object Oriented Programming
1. Create a class to represent a Car.
The car should have a make, model, number of doors, mileage, miles
per gallon, and petrol level.
Add a Print() function to print out all of the Car’s information at once,
with labels.
Create a few different cars and set their values manually to test this,
and print out the results.

2. Write a constructor for the class that accepts the make and model from the
calling code.
The constructor should set a default value for mileage.
It should choose the number of doors, miles per gallon, and petrol
level based on the make
Add a few different possible types of car that it will check
against
Add a fallback if none of those are passed in
Use these new constructors when creating your cars, and print out the
results.

4. Add a function Drive().
It should accept a number of miles to drive
It should increase mileage and decrease petrol level (based on the
car’s miles per gallon).
Print out the car’s values before and after calling the Drive() function.
*/

class Car
{
public: 
	
	//Constructors
	Car();
	Car(std::string _make, std::string _model, int _noOfDoors, int _mileage, int _milesPerGallon, int _petrolLevel);
	Car(std::string _make, std::string _model);

	void Print();
	void Drive(int _milesToDrive);

	void TestDrive(Car& car);

private:

	std::string make;
	std::string model;
	int noOfDoors;
	int mileage;
	int milesPerGallon;
	int petrolLevel;

public:
	int GetPetrolLevel();
	void SetPetrolLevel(int _petrolLevel);
};
