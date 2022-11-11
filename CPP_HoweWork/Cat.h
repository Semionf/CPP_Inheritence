#pragma once
#include "Animal.h"
class Cat : public Animal
{
private:
	int gurimCount;
	int age;
public:
	void setGurimCount(int);
	void setAge(int);
	void printGurimCount();
	void printAll();
};

