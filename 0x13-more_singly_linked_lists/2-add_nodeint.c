#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer to the beginning of a listint_t list
 * @n: integer data
 *
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
