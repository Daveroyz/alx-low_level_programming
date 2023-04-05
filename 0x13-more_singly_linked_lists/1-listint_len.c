#include "lists.h"

/**
* listint_len - Returns the number of elements in a linked list.
* @h: Pointer to the head node
*
* Return: The number of nodes in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t val;

	for (val = 0; h != NULL; val++)
	{
		h = h->next;
	}

	return (val);
}
