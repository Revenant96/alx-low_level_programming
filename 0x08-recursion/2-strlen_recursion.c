#include "main.h"
/**
 * _strlen_recursion - fuction to print length of string
 * @s: Pointer to string
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
