#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * Description: but for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * Return: Always 0
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            putchar('F');
            putchar('i');
            putchar('z');
            putchar('z');
            putchar('B');
            putchar('u');
            putchar('z');
            putchar('z');
        }
        else if (i % 3 == 0)
        {
            putchar('F');
            putchar('i');
            putchar('z');
            putchar('z');
        }
        else if (i % 5 == 0)
        {
            putchar('B');
            putchar('u');
            putchar('z');
            putchar('z');
        }
        else
        {
            int num = i;

            while (num > 0)
            {
                putchar(num % 10 + '0');
                num /= 10;
            }
        }
        if (i < 100)
        {
            putchar(' ');
        }
        else
        {
            putchar('\n');
        }
    }
    return 0;
}
