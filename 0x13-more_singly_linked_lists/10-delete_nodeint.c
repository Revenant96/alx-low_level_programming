#include "lists.h"
/**
 * delete_nodeint_at_index - funtion that deletes int
 * @head: address to pointer to head node
 * @index: location of the node to delete
 * Return: 1 on sucess -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prenode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (i == index)
		{
			prenode->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prenode = node;
		node = node->next;
	}
	return (-1);
}
