#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print struct dog
 * @d: pointer to dog
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (*d).name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		if ((*d).owner == NULL)
		{
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}

}
