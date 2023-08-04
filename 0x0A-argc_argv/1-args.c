#include <stdio.h>

/**
 * main - prints numbe of argumesnt
 * @argc: number of commands
 * @argv: arary of commands
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
