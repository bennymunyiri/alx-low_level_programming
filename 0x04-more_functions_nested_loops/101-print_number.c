#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
    int digit, is_negative = 0;

    if (n < 0) {
        is_negative = 1;
        n = -n;
    }

    if (n == 0) {
        _putchar('0');
        return;
    }

    if (is_negative) {
        _putchar('-');
    }

    int divisor = 1;
    while (n / divisor > 9) {
        divisor *= 10;
    }

    while (divisor != 0) {
        digit = n / divisor;
        _putchar(digit + '0');
        n %= divisor;
        divisor /= 10;
    }
}
