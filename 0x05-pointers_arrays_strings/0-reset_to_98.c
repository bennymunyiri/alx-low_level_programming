#include "main.h"
#include <stdio.h>
/**
 * void reset_to_98 - storing a value in tha addres
 * @*n: the value to be stored
 * Return: always zero
 */
void reset_to_98(int *n)
{
	int n = 98;

	int *p = &n;

	printf("%i/n", *p);
}
