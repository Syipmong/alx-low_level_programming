#include "lists.h"
/**
 * print_dlistint - print the data and count the nodes
 * @h: head, ptr to the first node
 * Return: count of the nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	/*Traversing*/
	while (h != NULL)
	{
		/*print all data */
		printf("%d\n", h->n);
		/* move forward*/
		h = h->next;
		/*increase the counter*/
		counter++;
	}
	return (counter);
}
