#include "main.h"
#include <unistd.h>
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
                char c = i / 10 + '0';
                write(1, &c, 1);
            }
            char c = i % 10 + '0';
            write(1, &c, 1);
        }
        write(1, "\n", 1);
    }
}
