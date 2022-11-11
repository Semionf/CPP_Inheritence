#include "AnimalRunner.h"
#include <iostream>
#include <stdlib.h>

#pragma warning(disable:4996)
void AnimalRunner::aRun(int numOfDogs, int numOfCats)
{
	char name[20];
	Dog* d = (Dog*)malloc(sizeof(Dog) * numOfDogs);
	if (!d)
	{
		return;
	}
	Cat* c = (Cat*)malloc(sizeof(Cat) * numOfCats);
	if (!c)
	{
		return;
	}
	for (int i = 0; i < numOfDogs; i++)
	{
		d = new Dog;
		d->setCode(i);
		d->setGurimCount(i + 1);
		printf("Please enter name for %d Dog\n", i+1);
		scanf("%s", name);
		d->setName(name);
		d->printAll();
		d++;
	}
	for (int i = 0; i < numOfCats; i++)
	{
		c = new Cat;
		c->setCode(i);
		c->setAge(i + 5);
		c->setGurimCount(i);
		printf("Please enter name for %d Cat\n", i + 1);
		scanf("%s", name);
		c->setName(name);
		c->printAll();
		c++;
	}
	
}
