#include "main.h"
#include <stdio.h>
/**
 * _strlen - the length of the string
 * @s: the string length is
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
