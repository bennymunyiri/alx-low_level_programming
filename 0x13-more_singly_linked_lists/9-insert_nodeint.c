#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to pointer to head of the linked list
 * @idx: Index of the list where the new node should be added
 * @n: Data to be added to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (!head)
		return (NULL);
	/* Create new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	/* Insert new node at beginning of list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* Find the node before the position to insert */
	current_node = *head;
	for (i = 0; i < idx - 1 && current_node; i++)
		current_node = current_node->next;
	/* If index is out of bounds */
	if (!current_node)
	{
		free(new_node);
		return (NULL);
	}
	/* Insert new node in between two existing nodes */
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
