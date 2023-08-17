#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of list.
 * @head: ptr to the first node
 * @index: pos of the node
 * Return: 1 ON SUCCES, 0 ON ERROR
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *c = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(c);
		return (1);
	}
	while (c != NULL && i < index)
	{
		c = c->next;
		i++;
	}
	if (c == NULL)
	{
		return (-1);
	}
	c->prev->next = c->next;

	if (c->next != NULL)
	{
		c->next->prev = c->prev;
	}
	free(c);
	return (1);
}
