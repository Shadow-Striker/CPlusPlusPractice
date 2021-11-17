// C++ Classes Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Car.h"
#include "Driver.h"
#include "Garage.h"

int main()
{
	Car car1("Toyota", "supra", 3, 60, 50, 10);
	Car car2("Cool Company", "Cool Car", 3, 20, 80, 10);
	Car car3("Bad Company", "Bad car", 5, 100, 30, 10);

	Car car4("Best Company", "Best Car");
	Car car5("Worst Company", "Worst Car");
	Car car6("Mediocre Company", "Mediocre Car");

	Car car7("a","a");

	Car* car1Ptr = nullptr;
	Car* car2Ptr = nullptr;
	car1Ptr = &car1;
	car2Ptr = &car2;
	Driver driver1(car1Ptr);
	std::vector<Car> content;
	Garage garage1(content);
	garage1.Park(car1Ptr);
    garage1.Park(car2Ptr);
	garage1.Print();

	std::cout << "Car values before driving: \n";
	car1.Print();
	car2.Print();
	car3.Print();


	car1.Drive(30);
	car2.Drive(50);
	car3.Drive(20);


	std::cout << "Car values after driving: \n";

	car1.Print();
	car2.Print();
	car3.Print();


	std::cout << "Car values before test driving: \n" << "Mileage: " << car1.mileage;
	std::cout << "\nPetrol Level: " << car1.petrolLevel;
	car1.TestDrive(car1);
	std::cout << "\nCar values after test driving: \n" << "Mileage: " << car1.mileage;
	std::cout << "\nPetrol Level: " << car1.petrolLevel;

	std::cout << "Car values before driver drives: \n" << "Mileage: " << car1.mileage;
	std::cout << "\nPetrol Level: " << car1.petrolLevel;
	driver1.Drive(5);
	std::cout << "Car values after driver drives: \n" << "Mileage: " << car1.mileage;
	std::cout << "\nPetrol Level: " << car1.petrolLevel;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
