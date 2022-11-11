#include "Son.h"
#include <iostream>
void Son::sonFunc()
{
	fatherFunc();
}

void Son::setAge(int age)
{
	this->age = age;
}

void Son::printAge()
{
	printf("Son's age is: %d\n");
}