// PartH_Randomisation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int totalRandom = std::rand();
	std::cout << "Random number is: " << totalRandom << "\n";

	//Seed random number generator so value isn't same each time.
	std::srand(time(NULL));
	int seededRandom = std::rand();
	std::cout << "Seeded rand num is: " << seededRandom << "\n";
	
	int moduloRange = 10;
	int moduloRandom = seededRandom % moduloRange;
	std::cout << "Modulo Rand Num (Between 0 and 9): " << moduloRandom << "\n";

	//Rand num between specified range

	int lowerNumber = 5;
	int higherNumber = 15;
	int range = higherNumber - lowerNumber;
	int randomRange = std::rand() % range;
	int finalResult = lowerNumber + randomRange;
	std::cout << "Random number between " << lowerNumber << "and " << higherNumber << ": " << finalResult << "\n";

	//Random floats
	//RAND_MAX is maximum random value

	float randFraction = (float)(seededRandom) / (float)RAND_MAX;
	std::cout << "Random float between 0 and 1: " << randFraction << "\n";

	return 0;
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
