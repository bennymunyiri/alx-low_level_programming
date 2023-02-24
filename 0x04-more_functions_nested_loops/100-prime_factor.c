#include <unistd.h>
/**
 * main - Entry point
 * Description: finding the largest prime number
 * return: Always 0
 */
int main(void)
{
    unsigned long int n = 612852475143;
    unsigned long int i = 2;
    char c;

    while (i <= n)
    {
        if (n % i == 0)
        {
            n /= i;
            if (n == 1)
            {
                c = i + '0';
                write(STDOUT_FILENO, &c, 1);
                write(STDOUT_FILENO, "\n", 1);
                break;
            }
            c = i + '0';
            write(STDOUT_FILENO, &c, 1);
            write(STDOUT_FILENO, "*", 1);
            i = 1;
        }
        i++;
    }
    return (0);
}
