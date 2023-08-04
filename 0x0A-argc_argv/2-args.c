#include <stdio.h>

/**
 * main - prints all functions it receives
 * @argc: number of commands
 * @argv: arary of commands
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

