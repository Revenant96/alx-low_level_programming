#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to a string
 * Return: Void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - conver string to int
 * @s: pointer to string to convert
 * Return: int
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstnum, i;

	for (firsnum = 0; !(s[firstnum] >= 48 && s[fristnum] <= 57); firstnum++)
	{
		if (s[firstnum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an int
 * @n: int
 * Return: void
 */

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, resp;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		resp = n / div;
		_putchar('0' + resp);
	}
}
/**
 * main - print the result of mul
 * @argc: int
 * @argv: array
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
