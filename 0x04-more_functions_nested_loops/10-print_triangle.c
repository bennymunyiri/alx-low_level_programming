#include <stdio.h>
/**
 * print_triangle - printing a refrecteed triangle
 * @size: size o the triangle
 * Return: void
 */
void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size - i; j++)
        {
            putchar(' ');
        }
        for (j = 1; j <= i; j++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}

