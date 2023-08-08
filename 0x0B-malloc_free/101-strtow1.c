#include "main.h"

/**
 * strtow - function that splits a string into words.
 * @str: pointer to string
 * Return: string on success NULL on failure
 */

char **strtow(char *str)
{
	if (str == '\0' || str == NULL)
	{
		return (NULL)
	}
