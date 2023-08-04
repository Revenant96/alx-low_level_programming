#include "main.h"

/**
 * _memset - function to mimic memset
 * @s: pointer to destination string
 * @b: string to use for replacing
 * @n: Size
 * Return: updated s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
