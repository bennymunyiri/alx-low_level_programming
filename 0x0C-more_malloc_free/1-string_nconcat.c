#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory to be allocated
 * Return: pointer to the allocated memory
 *         exits with a status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
  void *ptr = malloc(b);

  if (ptr == NULL)
  {
    exit(98);
  }
  return (ptr);
}
