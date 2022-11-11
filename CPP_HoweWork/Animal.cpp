#include "Animal.h"
#include <iostream>
void Animal::setCode(int code)
{
	this->code = code;
}

void Animal::printCode()
{
	printf("Code is: %d, ", this->code);
}

void Animal::setName(char* name)
{
	strcpy_s(this->name, name);
}

void Animal::printName()
{
	printf("Name is: %s, ", this->name);
}