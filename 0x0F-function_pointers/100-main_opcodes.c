#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a function
 *
 * @func: Pointer to the function to print the opcodes of
 * @num_bytes: Number of bytes to print
 *
 * Return: Nothing
 */
void print_opcodes(int (*func)(int, char **), int num_bytes)
{
	unsigned char *opcodes = (unsigned char *) func;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", opcodes[i]);
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 successful, 1 incorrect, 2
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(main, num_bytes);

	return (0);
}
