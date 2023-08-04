#include "main.h"

/**
 * _puts - function to print a string
 * @str : Represents string
 * Return : Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
