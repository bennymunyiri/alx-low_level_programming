#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
* malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to be allocated
 * Return: A pointer to the allocated memorry 98
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
