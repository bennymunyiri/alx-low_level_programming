#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate a substring
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_iter, *needle_iter;

	while (*haystack != '\0')
	{
		haystack_iter = haystack;
		needle_iter = needle;
		while (*haystack_iter != '\0' && *needle_iter != '\0'
		       && *haystack_iter == *needle_iter)
		{
			haystack_iter++;
			needle_iter++;
		}
		if (*needle_iter == '\0')
			return (haystack);
		haystack++;
	}

	return (NULL);
}
