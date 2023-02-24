#include <stdio.h>
#include "main.h"
/**
 * print_number - Prints an integer
 *
 * @n: The integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    int divisor = 1;

    /* Handle negative numbers */
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }

    /* Find the divisor needed to print the most significant digit first */
    while (n / divisor > 9)
    {
        divisor *= 10;
    }

    /* Print each digit in turn */
    while (divisor > 0)
    {
        putchar('0' + n / divisor);
        n %= divisor;
        divisor /= 10;
    }
}
