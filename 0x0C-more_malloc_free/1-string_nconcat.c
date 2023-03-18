#include "main.h"
<<<<<<< HEAD

/**
 * string_nconcat - concatenates two strings, but limits s2 to n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to new string, or NULL on failure
=======
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
* malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to be allocated
 * Return: A pointer to the allocated memorry 98
>>>>>>> 5c56a3dad7cee0bbb71a3ee037263763ac1992d0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
<<<<<<< HEAD
	unsigned int x, y, z;
	char *s;

	if (s1 == NULL)
		x = 0;
	else
		for (x = 0; s1[x]; x++)
			;

	if (s2 == NULL)
		y = 0;
	else
		for (y = 0; s2[y]; y++)
			;

	if (y > n)
		y = n;

	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		s[z] = s1[z];

	for (z = 0; z < y; z++)
		s[z + x] = s2[z];

	s[x + y] = '\0';
	return (s);
=======
    void *p;

    p = malloc(b);
    if (p == NULL)
    {
        exit(98);
    }
    return (p);
>>>>>>> 5c56a3dad7cee0bbb71a3ee037263763ac1992d0
}
