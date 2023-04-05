#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *free_node2;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	do {
		free_node2 = *head;
		*head = (*head)->next;
		free(free_node2);
	} while (*head != NULL);

	*head = NULL;
}

