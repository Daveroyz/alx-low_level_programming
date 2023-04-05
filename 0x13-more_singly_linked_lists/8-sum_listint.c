#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 *		 (n) of a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: return 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int num = 0;

	while (head != NULL)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
