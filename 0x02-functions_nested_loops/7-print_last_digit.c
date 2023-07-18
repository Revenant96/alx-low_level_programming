#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 *@n: takes number input
 *Return: lastDigit
 */

int print_last_digit(int)
{
	int lastDigit, n;

	if (n < 0)
	{
		lastDigit = (-1) * (n % 10);
	}
	else
	{
		lastDigit = n % 10;
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}

