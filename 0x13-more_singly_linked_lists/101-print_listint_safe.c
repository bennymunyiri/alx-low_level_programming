#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list of integers
 *                      (including those with a loop)
 * @head: Pointer to the beginning of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *prev;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	current = head;
	prev = NULL;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current < prev)
			break;
		prev = current;
		current = current->next;
	}
	if (current != NULL && current < prev)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		count++;
	}
	return (count);
}
