#include "main.h"

/**
 * print_rev - function to print string in revers
 * @s : String
 * Return : Void
 */

void print_rev(char *s)
{
	int str;

	while (s[str])
	{
		str++;
	}

	while (str--)
	{
		_putchar(s[str]);
	}
	_putcar('\n');
}
