#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: takes the first digit
 * Return: 0 always success
 */
void print_to_98(int n)
{
	for (; n >=  98; n--)
	{
		printf("%d, \n", n);
	}
	for (; n <= 98; n++)
	{
		printf("%d, \n", n);
	}

	return (0);
}
