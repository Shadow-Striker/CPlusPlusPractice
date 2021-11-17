#include "Driver.h"

Driver::Driver()
	:car()
	, milesToDrive(0)
{

}
Driver::Driver(Car* _car)
	: car()
	, milesToDrive(0)
{
}

void Driver::Drive(int _milesToDrive)
{
	car->Drive(5);
}
