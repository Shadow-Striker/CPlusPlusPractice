// Part C String Stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World!\n";

	std::string firstName = "Shadow";
	std::string lastName = "Striker";
	int test = 0;

	//Concatenate strings
	std::string fullName = firstName + " " + lastName;

	//Array access
	char firstInitialArray = fullName[0];

	//Substring
	std::string nameInitials = fullName.substr(0, 1);

	//Find 
	std::size_t spacePos = fullName.find(" ");

	nameInitials += fullName.substr(spacePos + 1, 1);
	
	std::cout << nameInitials;

	//1. Insult Generator
	std::string insult = "annoying person";
	std::string insultStart = "You are a ";
	std::string fullInsult;
	fullInsult = insultStart + insult;

	std::cout << fullInsult + "\n\n";

	//2. Truncated
	std::string longString = "This is a very very long string that goes on for a very very long time.";
	std::string truncatedString = longString.substr(0, 19);
	std::cout << truncatedString;
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
