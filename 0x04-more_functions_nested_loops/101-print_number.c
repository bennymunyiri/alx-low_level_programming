#include <unistd.h>
/**
 * print_number - Prints an integer
 * @n: The integer to print
 * Return: void
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        write(STDOUT_FILENO, "-", 1);
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
    {
        print_number(num / 10);
    }
    char c = (num % 10) + '0';
    write(STDOUT_FILENO, &c, 1);
}
