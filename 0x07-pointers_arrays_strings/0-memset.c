#include "main.h"

/**
 * _memset - function to mimic memset
 * @s: pointer to array
 * @b: character to add
 * @n: size
 * Return: updated string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
