#include "main.h"

/**
 * _string_toupper - function to reverse lowercase
 * to upper case
 * @str: string to be reversed
 * Return: Reversed string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

