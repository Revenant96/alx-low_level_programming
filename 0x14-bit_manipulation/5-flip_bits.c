#include "main.h"

/**
 * flip_bits - function that writes number of flips
 * to get from one number to another
 * @n: first int
 * @m: second int
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int c = 0;

	while (xorval)
	{
		if (xorval & 1ul)
		{
			c++;
		}
		xorval = xorval >> 1;
	}
	return (c);
}

