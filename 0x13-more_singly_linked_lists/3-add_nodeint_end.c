#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to a head of the lists
 * @n: Integer to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (*head != NULL)
		head = &(*head)->next;
	*head = new;

	return (new);
}
