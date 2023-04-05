#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: The head node's data (n), or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *popnode;
	int n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	popnode = *head;
	n = popnode->n;
	*head = popnode->next;
	free(popnode);

	return (n);
}
