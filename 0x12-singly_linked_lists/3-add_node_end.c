#include "lists.h"
/**
 * add_node_end - adds a taile node
 * @head: address to head node
 * @str: pointer to str
 * Return: size of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	list_t *node = *head;

	if (!head || !newnode)
		return (NULL);

	if (str)
	{
		newnode->str = strdup(str);

		if (!newnode->str)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = strlen_(newnode->);

		if (node)
		{
			while (node->next)
				node = node->next;

			node->next = newnode;
		}
	}
	else
		*head = newnode;

	return (newnode);
}
