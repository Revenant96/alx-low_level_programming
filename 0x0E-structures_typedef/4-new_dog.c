#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * _strlen - function to find length
 * @str: string to count
 * Return: length
 */

int _strlen(char const *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - function to copy string
 * @src: str to copy
 * @dest: copied str
 * Return: dest
 */

char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - new dog function
 * @name: pointer to name
 * @age: float age
 * @owner: pointer to owner
 * Return: struct dog_t on success
 * NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name== NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}

