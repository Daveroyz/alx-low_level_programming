#include "lists.h"

/**
 * print_listint -  print elements of a listint_t list.
 * @h: points to the Head in the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t val = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		val++;
		h = h->next;
	}
	return (val);
}
