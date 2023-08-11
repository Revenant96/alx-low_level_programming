#include "main.h"

/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer to block
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: NULL on Failure, ptr on success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;
	unsigned int i;


	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
		{
			return (NULL);
		}
		return (str);
	}

	if (new_size > old_size)
	{
		str = malloc(new_size);
		if (str == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)str + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (str);
}
