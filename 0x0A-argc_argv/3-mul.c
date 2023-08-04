#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: number of commands
 * @argv: arary of commands
 * Return: result if success 1 if error
 */

int main(int argc, char const *argv[])
{
	int ar1, ar2, mul;

	if (argc == 3)
	{
		ar1 = atoi(argv[1]);
		ar2 = atoi(argv[2]);

		mul = ar1 * ar2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
