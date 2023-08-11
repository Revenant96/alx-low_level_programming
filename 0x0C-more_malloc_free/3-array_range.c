#include "main.h"

/**
 * array_range - function that creates array of int
 * @min: first int
 * @max: last int
 * Return: all values from min to max on succes
 * NULL on failure
 */

int *array_range(int min, int max)
{
	int size, h;
	int *m;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	m = malloc(sizeof(int) * size);

	if (m == 0)
	{
		return (NULL);
	}

	for (h = 0; h < size; h++)
	{
		m[h] = min++;
	}
	return (m);
}
