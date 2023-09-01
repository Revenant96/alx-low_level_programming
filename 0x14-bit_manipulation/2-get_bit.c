#include "main.h"

/**
 * get_bit - function that returns bit of idx
 * @n: int to check
 * @index: represents index
 * Return: Value of Index on success and -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
