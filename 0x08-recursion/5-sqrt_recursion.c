#include "main.h"
#include <stdio.h>
/**
 * _sqrt_helper - recursive helper function to find the square root of n
 *
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i)
{
    /* Base case: perfect square */
    if (i * i == n)
        return (i);
    /* Base case: not a perfect square */
    if (i * i > n)
        return (-1);
    /* Recursive case: try the next guess */
    return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    /* Base case: n is negative */
    if (n < 0)
        return (-1);
    /* Start the recursive helper function with an initial guess of 0 */
    return (_sqrt_helper(n, 0));
}
