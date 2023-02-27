#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * Return: always zero
 */
void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 2)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
