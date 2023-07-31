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
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
