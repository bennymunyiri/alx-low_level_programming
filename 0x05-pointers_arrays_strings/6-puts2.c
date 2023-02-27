#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 */
void puts2(char *str)
{
    int i;

    for (i = 0; i < strlen(str); i += 2)
    {
        putchar(str[i]);
    }
    putchar('\n');
}
