#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if the letter is upper or lower case
 * @c: character input
 * Return: 1 if upper case
 * 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

