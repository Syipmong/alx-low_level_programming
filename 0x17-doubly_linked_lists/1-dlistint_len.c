#include "lists.h"
/**
 * dlistint_len - count the num of ele in the list
 * @h: head
 * Return: the number of nodes
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
