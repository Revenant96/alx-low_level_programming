#include "main.h"

/**
 * _strlen - function to return length
 * Description: Returns the length of a string
 * @s : represents the string
 * Return : ounter
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	{
		counter++;
	}
	return (counter);
}
