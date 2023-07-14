#include <stdio.h>

/**
 * main - entry point
 * descrption - writing all numbers with base 16
 * Return: 0 (Success)
 */

int main(void)
{
	int a = '0';

	for (; a <= '9' ;)
	{
		putchar(a);
		a++;
	}

	int i = 'a';

	for (; i <= 'f' ;)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
