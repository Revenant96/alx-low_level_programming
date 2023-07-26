#include "main.h"
#include <stdio.h>

/**
 * isLower - function to find if a letter is lowercase
 * @c: represents the letter
 * Return: 1 on success 0 on failure
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122)
}

/**
 * isDelimiter - to determine if the letter is a delimiter
 * @c: represents letter
 * Return: 1 on success 0 on failure
 */

int isDeleimiter(char c)
{
	int i;
	
	char Delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if c == Delimiter[i];
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
	char *ptr;

	int foundDelimiter = 1;

	while (*str)
	{
		if (isDelimiter(*str))
		{
			foundDelimiter = 1;
		}
		else if (isLower(*str))
		{
			*str -= 32;
			foundDelimiter = 0;
		}
		else
		{
			foundDelimiter = 0;
		}
		str++;
	}
	return (str);
}

