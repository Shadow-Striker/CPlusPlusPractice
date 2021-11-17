#pragma once
#include "Car.h"
#include <vector>
class Garage
{
public:
	Garage(std::vector<Car> _content);
	
	std::vector<Car*> content;

	void Print();
	void Park(Car* _carPtr);
	void Exit(Car* _carPtr);
};
