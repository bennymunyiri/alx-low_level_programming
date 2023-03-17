#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate
 * Return: A pointer to the allocated memory.
 * If malloc fails, the malloc_checked function causes normal process
 * termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        fprintf(stderr, "malloc failed: %s\n", strerror(errno));
        _exit(98);
    }
    return (ptr);
}
