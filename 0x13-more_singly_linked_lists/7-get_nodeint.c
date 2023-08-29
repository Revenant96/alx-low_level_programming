#include "lists.h"

/**
 * get_nodeint_at_index - unction that returns the nth
 * node of a listint_t linked list
 * @head: pointer to first node
 * @index: idex of the node starting at 0
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node &&
			n < index; node = node->next, n++)
		;

	return (node);
}
