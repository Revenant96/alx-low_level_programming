#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free dog
 * @d: dog to free
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
