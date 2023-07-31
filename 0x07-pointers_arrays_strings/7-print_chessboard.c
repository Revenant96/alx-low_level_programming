#include "main.h"
/**
 * print_chessboard - function that prints an array shaped chess board
 * @a: point to rows
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int count, gcount;

	for (count = 0; count <= 8; count++)
	{
		gcount = 0;
		while (gcount <= 8)
		{
			_putchar(a[count][gcount]);
			gcount++;
		}
	}
	_putchar('\n');
}
