#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: address of pointer to head node
 * @idx: the index of the list where the new node should be added
 * @n: value of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listing_t *node, *newnode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	node = *head;

	while (node)
	{
		if (i == idx - 1)
		{
			newnode->next = node->next;
			node->next = newnode;
			return (newnode);
		}
		i++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
