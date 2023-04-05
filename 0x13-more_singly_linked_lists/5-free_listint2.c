#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list of integers and sets head to NULL
 * @head: Pointer to pointer to the first node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

    current = *head;

    while (current != NULL)
    {
	    next = current->next;
	    free(current);
	    current = next;
    }
    *head = NULL;
}
