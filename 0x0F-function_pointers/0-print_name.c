#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name to print
 * @f: pointer to function that prints name
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
