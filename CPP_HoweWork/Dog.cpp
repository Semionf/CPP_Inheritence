#include "Dog.h"
#include <iostream>

void Dog::setGurimCount(int num)
{
	this->gurimCount = num;
}

void Dog::printGurimCount()
{
	printf("Number of gurim is: %d\n", this->gurimCount);
}

void Dog::printAll()
{
	this->printCode();
	this->printName();
	this->printGurimCount();
}