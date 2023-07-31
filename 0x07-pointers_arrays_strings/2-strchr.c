#include "main.h"

/**
 * _strchr - function that mimics strchr
 * @s: pointer to destination string
 * @c: represents string to locate
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	unsigned int count;

	for (count = 0; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
		{
			return (s + count);
		}
	}
	return ('\0');
}
