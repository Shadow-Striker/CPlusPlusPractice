// C++ Classes Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Car.h"

int main()
{
	Car car1("Toyota", "supra", 3, 60, 50, 10);
	Car car2("Cool Company", "Cool Car", 3, 20, 80, 10);
	Car car3("Bad Company", "Bad car", 5, 100, 30, 10);

	Car car4("Best Company", "Best Car");
	Car car5("Worst Company", "Worst Car");
	Car car6("Mediocre Company", "Mediocre Car");

	std::cout << "Car values before driving: \n";
	car1.Print();
	car2.Print();
	car3.Print();
	car4.Print();
	car5.Print();
	car6.Print();

	car1.Drive(30);
	car2.Drive(50);
	car3.Drive(20);
	car4.Drive(60);
	car5.Drive(20);
	car6.Drive(100);

	std::cout << "Car values after driving: \n";

	car1.Print();
	car2.Print();
	car3.Print();
	car4.Print();
	car5.Print();
	car6.Print();
    std::cout << "Hello World!\n";
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
