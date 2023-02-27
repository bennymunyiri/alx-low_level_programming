#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: The array of integers.
 * @n: The number of elements to be printed
 * Return: always zero
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        int num = a[i];

        if (num < 0)
        {
            num = -num;
            putchar('-');
        }
        if (num / 10)
        {
            print_array(a, num / 10);
        }
        putchar(num % 10 + '0');
        if (i != n - 1)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
}
