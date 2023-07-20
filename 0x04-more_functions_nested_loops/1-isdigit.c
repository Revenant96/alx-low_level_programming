#include "main.h"

/**
 * _isdigit - checks for a single numerical digit
 * @c: digit input
 * Return: 1 if c is a single digit
 * 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
