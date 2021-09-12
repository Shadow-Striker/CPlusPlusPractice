// PartG_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void HelloWorld();
bool SwearWordChecker();

float GetRectangleArea(float _width, float _height);
float rectArea = 0.0f;
std::string swearWord = "annoying";
std::string message = "This is annoying";

int main()
{
	HelloWorld();
	rectArea = GetRectangleArea(3.0f, 4.0f);
	std::cout << "Rectangle Area = " << rectArea;
}

void HelloWorld()
{
	std::cout << "Hello World!\n";
}

float GetRectangleArea(float _width, float _height)
{
	float area = _width * _height;

	return area;
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
