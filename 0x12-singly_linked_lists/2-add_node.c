#include "lists.h"

/**
 * add_node - function to add new node header
 * @head: address of head node
 * @str: pointer to first node
 * Return: size of lise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));

	if (!head || !newhead)
	{
		return (NULL);
	}

	if (str)
	{
		newhead->str = strdup(str);
		if (!newhead->str)
		{
			free(newhead);
			return (NULL);
		}
		newhead->len = strlen(newhead->str);
	}
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
