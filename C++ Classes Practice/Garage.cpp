#include "Garage.h"

Garage::Garage(std::vector<Car> _content)
	:content()
{
}

void Garage::Print()
{
	for (int i = 0; i < content.size(); ++i)
	{
		std::cout << "Make " << content[i]-> make << "\n";
		std::cout << "Model " << content[i] -> model << "\n";
	}

}

void Garage::Park(Car* _carPtr)
{
}

/*void Garage::Exit(Car* _carPtr)
{
	//content.erase(0);
}*/
