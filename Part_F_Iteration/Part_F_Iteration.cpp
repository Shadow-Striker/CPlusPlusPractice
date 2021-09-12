// Part_F_Iteration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	std::string longString = "Very long sentence contaning lots of words.";
	std::string newString = " ";

	std::string swearWord = "annoying";
	std::string message = "This is annoying";

	for (size_t i = 0; i < longString.length(); i++)
	{
		//append(string, position of first letter, number of letters to append);
		newString.append(longString,i,1);
		if (i == 19)
		{
			newString.append("\n");
		}
	}
	std::cout << newString;
}

/*Line breaker - Mark II: Create a long string of text with no line breaks. Then insert a line
break after the 20th character in the string. Repeat such that no line is longer than 20
characters. Bonus - break the line such that it breaks before the word containing the
20th character.*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
