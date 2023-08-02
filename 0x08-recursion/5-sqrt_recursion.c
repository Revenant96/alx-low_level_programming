#include "main.h"

/**
 * _sqrt_recursion - function to return squre root
 * @n: number
 * @i: square root
 * Return: Result
 */
int _sqrt_rec_helper(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_rec_helper(n, 1));
	}
}

/**
 * _sqrt_rec_helper - to find square root
 * @n: number
 * @i: squre root
 * Return: result
 */

int _sqrt_rec_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_rec_helper(n, i + 1));
	}
}
