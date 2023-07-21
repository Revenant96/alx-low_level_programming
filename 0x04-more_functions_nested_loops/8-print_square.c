#include "main.h"

/**
 * print_square - prints a square
 * @size: represents the size of the square
 * Return: 0 Always Succes
 */

void print_square(int size)
{
	int square, row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (square = 1; square <= size; square++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}

