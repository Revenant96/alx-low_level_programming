#include "lists"
/**
 * free_list - function that frees list
 * @head: pointer to head node
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *node, *nextnode;

	if (!head)
		return;

	node = head;

	while (node)
	{
		nextnode = node->next;
		free(node->str);
		free(node);
		node = nextnode;
	}
}
