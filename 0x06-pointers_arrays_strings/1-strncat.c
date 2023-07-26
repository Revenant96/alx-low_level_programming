#include "main.h"

/**
 * _strncat - function to concate 2 strings with max of n bytes
 * @src: first string
 * @dest: second string
 * @n: the number of bytes
 * Return: Result of concating
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;

	while (dest[c])
	{
		c++;
	}

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
	{
		dest[c + c2] = src[c2];
	}

	dest[c + c2] = '\0';

	return (dest);
}

