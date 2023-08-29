#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of list
 * @head: pointer to header node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
