#include "main.h"
#include <string.h>

/**
 * is_palindrome - function to determine a palindrome
 * @s: pointer to string to test
 * Return: 1 if true 0 if false
 */


int is_palindrome(char *s)
{
	if (strlen(s) < 2)
	{
		return (1);
	}
	else if(s[0] != s[strlen(s) - 1])
	{
		return (0);
	}
	else if (s[strlen(s) - 1] = '\0')
	{
		return (is_palindrome(&s[1]));
	}
}
