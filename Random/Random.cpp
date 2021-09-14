// Random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
/*1. Random Score: Write a function to create a random score for a fake player. The function
should accept a minimum and maximum score, and return the resulting random score.
The calling code should then call this function five times, printing the result each time.
Every time this program is run, these scores should be differen*/

void RandomScore(int _minScore, int maxScore);

int main()
{
	int totalRandom = std::rand();
	std::srand(time(NULL));
	int seededRandom = std::rand();
	int minScore = 0;
	int maxScore = 0;
	int range = 0;
	int randomRange = 0;
	int finalResult;

	std::cout << "Please enter a minimum score. ";
	std::cin >> minScore;
	std::cout << "\n Please enter a maximum score. ";
	std::cin >> maxScore;

	RandomScore(minScore, maxScore);
}

void RandomScore(int _minScore, int _maxScore)
{
	for (int i = 0; i < 3; i++)
	{
		int range = _maxScore - _minScore;
		int randomRange = std::rand() % range;
		int finalResult = _minScore + randomRange;
		std::cout << "\n " << i + 1 << ". The result is: " << finalResult;
	}
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
