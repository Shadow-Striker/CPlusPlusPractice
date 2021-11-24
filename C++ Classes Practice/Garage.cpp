#include "Garage.h"

Garage::Garage(std::vector<Car> _content)
	:content()
{
}

void Garage::Print()
{
	for (int i = 0; i < content.size(); ++i)
	{
		//std::cout << "Make " << content[i]-> make << "\n";
		//std::cout << "Model " << content[i] -> model << "\n";
		content[i]->Print();
	}

}

void Garage::Park(Car* _carPtr)
{
}

void Garage::Exit(Car* _carPtr)
{
	for (int i = 0; i < content.size(); ++i)
	{
		if (content[i] == _carPtr)
		{
			content.erase(content.begin() + i);
			break;
		}
	}
}
