#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum integer value to be included in the array
 * @max: the maximum integer value to be included in the arra
 * Return: On success, a pointer to the newly created array. On failure, NULL.
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;

    /* check for invalid input */
    if (min > max)
        return (NULL);
    /* calculate the size of the array */
    size = max - min + 1;
    /* allocate memory for the array */
    arr = malloc(sizeof(int) * size);
    if (arr == NULL)
        return (NULL);
    /* fill the array with integers */
    for (i = 0; i < size; i++)
        arr[i] = min++;
    return (arr);
}
