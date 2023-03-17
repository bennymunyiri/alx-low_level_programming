#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a string is a digit
 * @s: string to check
 *
 * Return: 1 if s is a digit, 0 otherwise
 */
int _isdigit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }
    return (1);
}

/**
 * _strlen - gets the length of a string
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s)
    {
        len++;
        s++;
    }
    return (len);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 98 if incorrect number of arguments,
 *         or 99 if either argument is not a positive number
 */
int main(int argc, char **argv)
{
    int len1, len2, i, j, n1, n2, res_len, carry, dig1, dig2, *res;
    char *s1, *s2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }
    s1 = argv[1], s2 = argv[2];
    if (!_isdigit(s1) || !_isdigit(s2))
    {
        printf("Error\n");
        return (98);
    }
    len1 = _strlen(s1), len2 = _strlen(s2);
    res_len = len1 + len2;
    res = calloc(res_len, sizeof(int));
    if (!res)
        return (1);
    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        dig1 = s1[i] - '0';
        for (j = len2 - 1; j >= 0; j--)
        {
            dig2 = s2[j] - '0';
            carry += res[i + j + 1] + (dig1 * dig2);
            res[i + j + 1] = carry % 10;
            carry /= 10;
        }
        if (carry)
            res[i + j + 1] += carry;
    }
    i = 0;
    while (i < res_len - 1 && !res[i])
        i++;
    for (; i < res_len; i++)
        printf("%d", res[i]);
    printf("\n");
    free(res);
    return (0);
}
