#include "main.h"
#include <stdio.h>

/**
 * isLower - function to find if a letter is lowercase
 * @c: represents the letter
 * Return: 1 on success 0 on failure
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - to determine if the letter is a delimiter
 * @c: represents letter
 * Return: 1 on success 0 on failure
 */

int isDelimiter(char c)
{
	int i;
	char Delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == Delimiter[i])
		return (1);
	}
	return (0);
}

/**
 * cap_string - function to capitalize all words
 * @str: string
 * Return: CApitalized string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimit = 1;

	while (*str)
	{
		if (isDelimiter(*str))
		{
			foundDelimit = 1;
		}
		else if (isLower(*str) && foundDelimit)
		{
			*str -= 32;
			foundDelimit = 0;
		}
		else
		{
			foundDelimit = 0;
		}
		str++;
	}
	return (ptr);
}

