#include <unistd.h>
#include "main.h"

/**
 * _putchar = writes the character c to stdout
 * description - to print out c
 * @c: The Character to print
 *
 * Return: On Success 1
 *	   On error  -1 is returned. and error no is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
