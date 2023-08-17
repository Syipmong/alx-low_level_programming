#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: ptr to the first node
 * Return: empty list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *c = head;
	dlistint_t *nx;

	while (c != NULL)
	{
		nx = c->next;
		free(c);
		c = nx;
	}
}
