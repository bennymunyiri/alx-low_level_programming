#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*func_ptr)(int, int);

	if (argc != 4) /* Check for correct number of arguments */
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]); /* Convert arguments to integers */
	num2 = atoi(argv[3]);
	operator = argv[2];

	func_ptr = get_op_func(operator); /* Get function pointer */

	if (func_ptr == NULL || operator[1] != '\0') /* Check for invalid operator */
	{
		printf("Error\n");
		exit(99);
	}

	result = func_ptr(num1, num2); /* Call the function using the pointer */

	printf("%d\n", result);

	return (0);
}
