#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function to initalize dog
 * @d: pointer to dog
 * @name: pointer to name
 * @age: float for age
 * @owner: pointer to owner
 * Return: Void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
