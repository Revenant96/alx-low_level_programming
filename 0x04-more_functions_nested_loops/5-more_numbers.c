#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 * Return: 0 Always Success
 */

void more_numbers(void)
{
	int i, num, count;

	i = 0;

	while (i <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			count = num;
			if (num > 9)
			{
				_putchar(1 + 48);
				count = num % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
