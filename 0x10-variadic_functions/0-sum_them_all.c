#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of a variable number of integers
 * @n: the number of integers to sum
 * @...: the integers to sum
 *
 * Return: the sum of the integers, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
