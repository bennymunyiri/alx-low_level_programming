#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (head == NULL || str == NULL)
	    return (NULL);
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
	    return (NULL);
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
	    free(new_node);
	    return (NULL);
    }
    new_node->len = strlen(new_node->str);
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
unsigned int strlen(const char *s)
{
    unsigned int len = 0;

    while (*(s + len))
	    len++;
    return (len);
}
