#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
