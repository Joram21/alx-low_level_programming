#include "lists.h"
/**
 * sum_dlistint - returns the nth node of a dlistint_t linked list
 * @head: head pointer
 * Return: pointer to node; if the node does not exist, return NULL
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	unsigned int sum;
	sum = 0;
	tmp = head;
	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
