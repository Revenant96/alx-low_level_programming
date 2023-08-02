#include "main.h"

/**
 * s_prime_numbe - function to find a prime number
 * @n: number to test
 * Return: 0 if failure 1 on success
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_helper(n, 2));
	}
}

/**
 * prime_helper - to help finding prime numbers
 * @n: number to test
 * @i: int
 * Return: result
 */

int prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_helper(n, i + 1));
	}
}

