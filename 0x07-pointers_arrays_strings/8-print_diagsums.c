#include "main.h"

/**
 * print_diagsums - function to sum 2 diagonals
 * @a: pointer to array
 * @size: size of array
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int count, sum1 = 0, sum2 = 0;

	for (count = 0; count < size; count++)
	{
		sum1 += a[count];
		sum2 += a[zise - count - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
