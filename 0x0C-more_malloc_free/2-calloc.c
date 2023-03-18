<<<<<<< HEAD
#include "main.h"
/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
*
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
*
* Return: pointer to the allocated memory.
*/
void * _calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
=======
#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string (will use at most n bytes)
 * @n: the maximum number of bytes from s2 to use
 * Return: a pointer to the concatenated string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];
	result[len1 + n] = '\0';
	return (result);
}
>>>>>>> 5c56a3dad7cee0bbb71a3ee037263763ac1992d0
