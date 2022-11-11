#include "Father.h"
#include <iostream>
void Father::fatherFunc()
{
	printf("Father");
}

void Father::setAge(int age)
{
	this->age = age;
}

void Father::printAge()
{
	printf("Son's age is: %d\n");
}

