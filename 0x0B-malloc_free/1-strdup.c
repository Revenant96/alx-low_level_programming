#include "main.h"

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: Pointer to string
 * Return: the string on success or NULL if Null
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0'; size++)
	{
		c = malloc(size * sizeof(*str) + 1);

		if (c == 0)
		{
			return (NULL);
		}

		else
		{
			for (; i < size; i++)
			{
				c[i] = str[i];
			}
		}
	}
	return (c);
}
