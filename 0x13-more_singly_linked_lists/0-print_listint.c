#include "lists.h"

/**
 * print_listint -  print elements of a listint_t list.
 * @h: points to the Head in the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t val = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		val += 1;
		node = node->next;
	}
	return (val);
}
