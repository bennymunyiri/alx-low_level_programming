#include <stdio.h>
#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 * Description: Write numbers
 * Return: Always zero
 */
void print_number(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }

    if (n / 10)
    {
        print_number(n / 10);
    }
    putchar(n % 10 + '0');
}

