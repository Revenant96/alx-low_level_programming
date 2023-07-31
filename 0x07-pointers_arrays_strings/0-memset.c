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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
