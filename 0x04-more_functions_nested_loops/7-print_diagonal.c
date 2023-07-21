#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: represents to line curve
 * Return: 0 Always Success
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 2; space <= postn; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}


