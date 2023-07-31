#include "main.h"

/**
 * _memset - fuction that mimics memset
 * @s: pointer to the string to be replaced
 * @b: string to use to replace
 * @n: size
 * Return: memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; n > 0; counter++)
	{
		s[counter] = b;
		n--;
	}
	return (s);
}
