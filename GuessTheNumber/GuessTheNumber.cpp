// GuessTheNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*The game will choose a random number in secret. The player will be prompted to
guess numbers until they guess the correct one. The game will indicate if the guess
is too high or too low. It will also track how many guesses it takes to reach the
correct answer. Once the correct number has been guessed, the game will indicate
how many guesses it took, and ask if the player wants to play again. If the player
says yes, the game will start again from the beginning.*/


#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cctype>

int ChooseRandomNumber(int _minNumber, int _range);
int GuessNumber(int _maxNumber, int _minNumber, int _guess);
void PrintRulesMessage();
char GetPlayAgainAnswer();

int main()
{
	//int totalRandom = std::rand();
	//Seeds the psuedo random number generator used by std::rand() with the value seed.
	//time(NULL) in this case.
	std::srand(time(NULL));
	int randomNumber = 0;
	int guess = 0;
	int guessAmount = 0;
	int minNumber = 1;
	int maxNumber = 50;
	int range = maxNumber - minNumber;
	char playAgainAnswer = 'Y';

	//Displays game rules
	PrintRulesMessage();

	//Asks for guess while guess while play again answer is Y.

	while (playAgainAnswer == 'Y')
	{
		randomNumber = ChooseRandomNumber(minNumber, range);
		while (guess != randomNumber)
		{
			guess = GuessNumber(maxNumber, minNumber, guess);
			//Guess is too high
			if (guess > randomNumber)
			{
				std::cout << "Your guess was too high.\n";
			}
			//guess is too low
			else if (guess < randomNumber)
			{
				std::cout << "Your guess was too low. \n";
			}
			//Increases number of guesses made
			guessAmount++;
		}
		std::cout << "\n You guessed correctly! The number was: " << randomNumber;
		std::cout << "\n You guessed a total of " << guessAmount << " time(s).";
		std::cout << "\n\n Would like to play again? Type 'y' or 'n'\n";
		
		//Recieve input for if the player wants to play again.
		playAgainAnswer = GetPlayAgainAnswer();

		if (playAgainAnswer == 'Y')
		{
			guess = 0;
		}
		else if (playAgainAnswer == 'N')
		{
			std::cout << "You have ended the game.";
			return 0;
		}
	}
}

int ChooseRandomNumber(int _minNumber, int _range)
{
	int randomRange = std::rand() % _range;
    int newRandomNumber = _minNumber + randomRange;
	return newRandomNumber;
}

int GuessNumber(int _maxNumber, int _minNumber, int _guess)
{
	std::cout << "\n Please type your guess. (The number is between " << _minNumber << " and " << _maxNumber << ")\n";
	std::cin >> _guess;

	//Ask for new guess while input contains symbols or letters.
	//std::cin.fail() means there was an input error.
	while(std::cin.fail())
	{
		//Clears the error state
		std::cin.clear();
		//Ignores the rest of the line after the error has occured and skips to the next line.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Your guess must not include letters or symbols.";
		std::cout << "\n Please type your guess. (The number is between " << _minNumber << " and " << _maxNumber << ")\n";
		std::cin >> _guess;
	}
		return _guess;
}


void PrintRulesMessage()
{
	std::cout << "Welcome to the Guess The Number game. \n";
	std::cout << "A random number has been chosen. \n";
	std::cout << "You must attempt to guess the random number. \n";
}

char GetPlayAgainAnswer()
{
	char newPlayAgainAnswer = ' ';
	std::cin >> newPlayAgainAnswer;

	while (std::cin.fail())
	{
		//Clears the error state
		std::cin.clear();
		//Ignores the rest of the line after the error has occured and skips to the next line.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Your answer must be either 'Y' or 'N' (Not including the ' ')\n";
		std::cin >> newPlayAgainAnswer;
	}
	newPlayAgainAnswer = std::toupper(newPlayAgainAnswer);
	return newPlayAgainAnswer;
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
