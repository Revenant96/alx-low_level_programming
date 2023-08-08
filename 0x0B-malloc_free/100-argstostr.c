#include "main.h"

/**
 * _strlen - function to find length
 * @s: pointer to arg
 * Return: Int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: given arguments
 * @av: pointer to arguments
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string or Null if failure
 */

char *argstostr(int ac, char **av)
{
	int i = 0, c = 0, h = 0, anc = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; i < ac; i++, anc++)
	{
		anc += _strlen(av[i]);
	}
	s = malloc(sizeof(char) * anc + 1);

	if (s == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (h = 0; av[i][h] != '\0'; h++, c++)
		{
			s[c] = av[i][h];
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
