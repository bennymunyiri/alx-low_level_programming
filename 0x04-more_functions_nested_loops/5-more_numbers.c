#include "main.h"
/**
 * more_numbers - Printing ten times
 * Description: Printing 1 to 14 ten times
 * Return: Always return 0
 */
void more_numbers(void)
{
    int i, j;

    for (j = 0; j <= 10; j++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (j > 9)
            {
                _putchar(i / 10 + '0');
            }
            _putchar(i % 10 + '0');
        }
        _putchar('\n');
    }
}
