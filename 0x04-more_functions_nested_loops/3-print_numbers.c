#include "main.h"
#include <unistd.h>

/**
 * print_numbers - printing numbers from 0 to 9
 * Description: Printing numbers
 * Return: always zero
 */
void print_numbers(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        char c = i + '0';
        write(1, &c, 1);
    }
    write(1, "\n", 1);
}
