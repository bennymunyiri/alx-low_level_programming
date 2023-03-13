#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of the array
 * @c: specific char
 * Return: pointer, NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == 0)
	{
		return (NULL);
	}
		for (i = 0; i < size; i++)
			array[i] = c;
	return (array);
}
