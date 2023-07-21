#include "main.h"

/**
 * print_most_numbers - prints all numbers except for 2 and 4
 * Return: 0 Always success
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
