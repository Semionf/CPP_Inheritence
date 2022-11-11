#include "Cat.h"
#include <iostream>
void Cat::setGurimCount(int num)
{
	this->gurimCount = num;
}

void Cat::setAge(int num)
{
	this->age = num;
}

void Cat::printGurimCount()
{
	printf("Number of gurim is: %d, ", this->gurimCount);
}

void Cat::printAll()
{
	this->printCode();
	this->printName();
	this->printGurimCount();
	printf("Age is: %d\n", this->age);
}