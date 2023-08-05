#include "main.h"

/**
 * _isalpha = checks of the lower or upper case
 * @c: character input
 * Return: 1 if lower or upper case
 * otherwhise Always 0 (Success)
 */

int _ispalha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

