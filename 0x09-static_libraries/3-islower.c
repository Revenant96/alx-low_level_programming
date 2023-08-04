#include "main.h"

/**
 * _islower - function to check if lowercase
 * 
 * @c: checks the input of fucntion
 *
 * Return: 1 if c is lower case
 * 		otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

