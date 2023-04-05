#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to pointer to the first element of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tmp;
	int diff;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;
		diff = current - current->next;

		if (diff > 0)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	return (size);
}
