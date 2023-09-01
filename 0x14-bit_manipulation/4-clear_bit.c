#include "main.h"
/**
 * clear_bit - function that sets bit to 0
 * @n: pointer to int
 * @index: position to set bit to 0
 * Return: 1 on success -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= << index;

	return (1);
}
