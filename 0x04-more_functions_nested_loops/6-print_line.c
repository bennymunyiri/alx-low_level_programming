#include <stdio.h>
/**
 * print_line - prints a line of underscores
 * @n: Length of the line
 *
 * Description: Prints a line of underscores of length n to the standard output.
 *
 * Return: void
 */
void print_line(int n)
{
    if (n <= 0)
    {
        putchar('\n');
    }
    else
    {
        int i;

        for (i = 0; i < n; i++)
        {
            putchar('_');
        }
        putchar('\n');
    }
}
