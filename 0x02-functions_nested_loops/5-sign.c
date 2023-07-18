#include "main.h"

/**
 * print_sign - function to check sign
 * @n: sign
 * Return: 1 If positive
 * 	0 if value is zero
 * 	-1 if Negative
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0 )
	{
		_putchar(48);
		return (0);
	}
	if (n <= -1)
	{
		_putchar(45);
		return (-1);
	}
}

