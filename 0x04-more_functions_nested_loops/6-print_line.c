#include "main.h"

/**
 * print_line - prints a line in terminal
 * @n: represents the number of times _ to be printed
 * Return: 0 Alwaus Succes
 */
void print_line(int n)
{
	int lnchar;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lnchar = 1; lnchar <= n; lnchar++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

