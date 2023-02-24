#include "main.h"
#include <unistd.h>
/**
 * print_most_numbers - Print again all numbers except from 2 and 4
 * Description: printing number except 2 or 4
 * Return: Always zero
 */
void print_most_numbers(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        if (i != 2 && i != 4)
        {
            char c = i + '0';
            write(1, &c, 1);
        }
    }
    write(1, "\n", 1);
}
