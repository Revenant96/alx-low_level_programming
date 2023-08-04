#include <stdio.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of commands
 * @argv: arary of commands
 * Return: 0 if no numbers passed, error if non digits
 */

int main(int argc, char const *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (c < '0' || c > '9')
			{
				printf("Error\n", 1);
			}
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

