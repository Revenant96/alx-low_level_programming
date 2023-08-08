#include "main.h"

/**
 * alloc_grid - function that returns a
 * pointer to a 2 dimensional array of integers
 * @width: represents width of grid
 * @height: represents height of grid
 * Return: 1 on success 0 on failure
 */

int **alloc_grid(int width, int height)
{
	int **s, w, h;

	s = malloc(sizeof(*s) * height);

	if (width <= 0 || height <= 0 || s == 0)
	{
		return (NULL);
	}
	else
	{
		for (h = 0; h < height; h++)
		{
			s[h] = malloc(sizeof(**s) * width);

			if (s[h] == 0)
			{
				while (h--)
				{
					free(s[h]);
				}
				free(s);
				return (NULL);
			}
			for (; w < width; w++)
			{
				s[h][w] = 0;
			}
	}
	return (s);
}
