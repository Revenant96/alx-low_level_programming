#include "main.h"

/**
 * _strncpy - function to copy string
 * @src: fist string
 * @dest: second string
 * @n: number of characters
 * Return: Result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
