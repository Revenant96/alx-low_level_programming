#include "main.h"
/**
 * print_chessboard - function that prints an array shaped chess board
 * @a: point to rows
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int count, gcount;

	for (count = 0; count < 8; count++)
	{
		for (gcount = 0; gcount < 8; gcount++)
		{
			_putchar(a[count][gcount]);
		}
	}
	_putchar('\n');
}
