#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strdup - copy one string to a new
 * @str: the length of the string
 * Return: On success, a pointer to the newly allocated
 */
char *_strdup(char *str)
{
	char *str;

	if (str == 0)
	{
		return (NULL);
	}
	new_str = malloc(sizeof(char) * (strlen(str) + 1));
	if (new_str == 0)
	{
		return (NULL);
	}
	strcpy(new_str, str)
		return (new_str);
}
