#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0
 */

int main(void)
{
    long long n = 612852475143;
    long long i;

    while (n % 2 == 0)
    {
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }

    if (n > 2)
    {
        char str[21];
        int j = 0;
        while (n > 0)
        {
            str[j] = n % 10 + '0';
            n /= 10;
            j++;
        }
        putchar(str[j-1]);
        for (int k = j-2; k >= 0; k--)
        {
            putchar(str[k]);
        }
        putchar('\n');
    }
    else
    {
        char str[21];
        int j = 0;
        while (i-2 > 0)
        {
            str[j] = (i-2) % 10 + '0';
            (i-2) /= 10;
            j++;
        }
        putchar(str[j-1]);
        for (int k = j-2; k >= 0; k--)
        {
            putchar(str[k]);
        }
        putchar('\n');
    }

    return (0);
}
