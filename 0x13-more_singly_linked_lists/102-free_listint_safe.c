#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h != NULL && (*h)->next != NULL && (*h) < (*h)->next)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}

	if (*h != NULL)
	{
		free(*h);
		*h = NULL;
		count++;
	}

	return (count);
}
