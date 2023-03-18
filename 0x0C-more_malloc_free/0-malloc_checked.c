<<<<<<< HEAD
#include "main.h"
/**
* malloc_checked - cause normal process termination with a status value of 98
*
* @b: allocated memory
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
    void *p;

    p = malloc(b);
    if (p == NULL)
    {
        exit(98);
    }
    return (p);
}
>>>>>>> 5c56a3dad7cee0bbb71a3ee037263763ac1992d0
