#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth
 * node of adlistint_t linked list.
 * @head: ptr to the first node
 * @index: node pos
 * Return: nth node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c = head;

	while (c != NULL && index > 0)
	{
		c = c->next;
		index--;
	}
	return (c);
}
