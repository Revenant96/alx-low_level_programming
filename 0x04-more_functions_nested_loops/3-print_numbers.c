#include "main.h"

/**
 * print_numbers - prints all single digit numbers
 * Return: 0 Always success
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
