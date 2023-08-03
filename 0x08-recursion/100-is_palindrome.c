#include "main.h"
#include <string.h>

/**
 * is_palindrome - function to determine a palindrome
 * @s: pointer to string to test
 * Return: 1 if true 0 if false
 */


int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
