#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first node of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *free_node;

	do {
		free_node = head;
		head = head->next;
		free(free_node);
	} while (head != NULL);
}
