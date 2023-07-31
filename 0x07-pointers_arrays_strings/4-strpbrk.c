#include "main.h"
/**
 * _strpbrk - function that mimics strpbrk
 * @s: pointer to destination string
 * @accept: pointer to source string
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int count, gcount;
	char *p;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (gcount = 0; accept[gcount] != '\0'; gcount++)
		{
			if (accept[gcount] == s[count])
			{
				p = &s[count];
				return (p);
			}
		}
	}
	return (0);
}
