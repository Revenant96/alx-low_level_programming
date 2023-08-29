#include "lists.h"
/**
 * free_listint - function that fress list
 * @head: pointer to head node
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
