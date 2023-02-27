#include "main.h"
#include <stdio.h>
/**
 * swap_int - swapping two ints using pointers
 * @a: int number 1
 * @b: int number 2
 * return: always return zero
 */
void swap_int(int *a, int *b)
{
	int *tmp = *b;

	*a = *b;
	*b = *tmp;
}
