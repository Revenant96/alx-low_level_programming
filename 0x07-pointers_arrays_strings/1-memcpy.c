#include "main.h"

/**
 * _memcpy - function that mimics memcpy
 * @dest: represents pointer to destination string
 * @src: represents pointer to source string
 * @n: represents size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; n > 0; count++, n--)
	{
		dest[count] = src[count];
	}
	return (dest);
}
