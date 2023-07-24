#include "main.h"

/**
 * _strcpy - function that copies the string
 * @src : from
 * @dest : to
 * Description: copy from src to dest
 * Return : dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do(
			i++;
			dest[i] = src[i];
			)
	while (src[i] != '\0')
		;

	return (dest);
}
