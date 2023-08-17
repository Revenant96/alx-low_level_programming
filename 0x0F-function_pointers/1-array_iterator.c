#include "function_pointers.h"

/**
 * array_iterator - function that excutes parameter
 * of array
 * @array: array to excute
 * @size: the array size
 * @action: pointer to function with executable action
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
