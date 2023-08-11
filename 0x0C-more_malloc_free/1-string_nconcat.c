#include "main.h"

/**
 * string_nconcat - function to concat 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: size of second string to concat
 * Return: NULL on failure, concated string on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1, c2, lens1, lens2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;
	str = malloc(lens1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (c1 = 0; s1[c1] != '\0'; c1++)
	{
		str[c1] = s1[c1];
	}
	for (c2 = 0; c2 < n; c2++)
	{
		str[c1] = s2[c2];
		c1++;
	}

	str[c1] = '\0';
	return (str);
}
