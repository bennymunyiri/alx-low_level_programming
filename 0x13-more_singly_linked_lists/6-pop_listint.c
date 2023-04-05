#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list, and returns
 *               the head node's data (n).
 * @head: A pointer to a pointer to the first node in the list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - the data (n) of the head node that was deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
