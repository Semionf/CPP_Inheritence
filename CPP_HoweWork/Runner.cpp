#include "Runner.h"
#include <iostream>
#pragma warning (disable:4996)
void Runner::run()
{
	Son son;
	int age=0;
	printf("Please enter age: ");
	scanf("%d", &age);
	son.setAge(age);
	son.printAge();
	son.sonFunc();
}