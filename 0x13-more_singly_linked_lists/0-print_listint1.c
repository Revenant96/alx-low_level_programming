#include "lists.h"
/**
 * print_listint - function to print all linkedlists
 * @h: pointer to first node
 * Return: list size
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
