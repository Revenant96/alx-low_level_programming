#include <stdio.h>

/**
 * main - rentry point
 * description - fizz buzz test
 * Return: 0 Always Success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i == 99)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0 && i % 3 != 0
				&& i != 99)
		{
			printf("Buzz ");
		}

		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

