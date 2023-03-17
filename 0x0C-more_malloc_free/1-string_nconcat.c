#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
  void *ptr = malloc(b * (sizeof(int));

  if (ptr == NULL)
  {
    exit(98);
  }
  return (ptr);
}
