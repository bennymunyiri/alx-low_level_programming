#include "main.h"
#include <stdio.h>
/**
 * factorial - calculates the factorial of a given number.
 * @n: The number to calculate the factorial for.
 * Return: The factorial of the given number. -1 if n is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
