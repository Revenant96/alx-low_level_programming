#include "main.h"
/**
 * memset - fills mem with cons byte
 * @s: pointer to plac cons
 * @b: cons
 * @n: max bytes
 * Return: S
 */

char *memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: pointer to array
 * @size: size of array
 * Return: NULL on failure, _calloc on succes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
	{
		return (NULL);
	}
	memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
