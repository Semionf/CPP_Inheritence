#pragma once
#include "Father.h"
class Son: public Father
{
private:
	int age;
public: 
	void setAge(int);
	void sonFunc();
	void printAge();
};

