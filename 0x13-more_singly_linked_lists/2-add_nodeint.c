#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the head of the listint_t list.
 * @n: integer value to store in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Set the data for the new node */
	new_node->n = n;
	new_node->next = NULL;
	/* If the list is empty, the new node becomes the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Traverse the list to find the last node */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	/* Add the new node at the end */
	last_node->next = new_node;
	return (new_node);
}
