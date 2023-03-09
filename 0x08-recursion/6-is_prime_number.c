#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1) /* 1 and below are not prime */
        return (0);
    return (check_prime(n, 2)); /* start checking divisors from 2 */
}
/**
 * check_prime - checks if a number is prime by checking divisors
 * @n: the number to check
 * @divisor: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
    if (n % divisor == 0) /* if n is divisible by the current divisor */
    {
        if (n == divisor) /* if the divisor is equal to n, n is prime */
            return (1);
        else /* if the divisor is less than n, n is not prime */
            return (0);
    }
    else /* if n is not divisible by the current divisor */
    {
        if (divisor == n - 1) /* if we have checked all possible divisors up to n - 1 */
            return (1); /* n is prime */
        else /* if we have not checked all possible divisors */
            return (check_prime(n, divisor + 1)); /* check the next divisor */
    }
}
