#include "main.h"

/**
 * swap_int - function to swap two ints
 * @a : first int
 * @b : second int
 * Return : Void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
