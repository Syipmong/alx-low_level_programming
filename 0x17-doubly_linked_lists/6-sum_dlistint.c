#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: ptr to the firs node
 * Return: sum of data
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *c = head;

	while (c != NULL)
	{
		sum += c->n;
		c = c->next;
	}
	return (sum);
}
