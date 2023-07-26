#include "main.h"

/**
 * _strcat - function to concat 2 strings
 * @src: first string to concat
 * @dest: second string to concat
 * Return: result of concating
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
	{
		c++;
	}

	for (c2 = 0; src[c2]; c2++)
	{
		dest[c++] = src[c2];
	}

	return(dest);
}

