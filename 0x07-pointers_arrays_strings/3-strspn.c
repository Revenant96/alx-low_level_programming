#include "main.h"

/**
 * _strspn - function to mimic strspn
 * @s: pointer to destination string
 * @accept: pointer to source string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, gcount;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (gcount = 0; accept[gcount] != s[count]; gcount++)
		{
			if (accept[gcount] == '\0')
			{
				return (count);
			}
		}
	}
	return (count);
}
