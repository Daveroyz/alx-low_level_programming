#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @idx: the index of the list where the new node should be added
 * @head: the pointer to the head node
 * @n: value for a new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int val;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (val = 0; val < idx - 1 && temp != NULL; val++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
