#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of the lsit
 * @head: ptr to the first node of the list
 * @n: Data
 * Return: add of new node or null
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newN = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (newN == NULL)
	{
		return (NULL);
	}

	newN->n = n;
	newN->next = NULL;
	if (*head == NULL)
	{
		newN->prev = NULL;
		*head = newN;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newN;
		newN->prev = current;
	}
	return (newN);
}
