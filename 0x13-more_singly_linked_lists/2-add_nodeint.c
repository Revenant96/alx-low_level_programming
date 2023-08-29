#include "lists.h"

/**
 * add_nodeint - function that adds new node header
 * @head: pointer to head node
 * @n: value of new node
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (*head)
		newnode->next = *head;

	*head = newnode;

	return (newnode);
}
