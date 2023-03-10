#include <stdio.h>
/**
 * print_square - Prints a square using '#' characters.
 * @size: The size of the square to be printed.
 * Description: Square in hashes
 * Return: void
 */
void print_square(int size)
{
    int i, j;

    if (size <= 0)
    {
        putchar('\n');
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                putchar('#');
            }
            putchar('\n');
        }
    }
}

