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
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
