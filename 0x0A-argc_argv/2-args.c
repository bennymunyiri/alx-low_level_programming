#include <stdio.h>
/**
 * main - Prints the number of arguments
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", argc);
		argc --;
	}
	return (0);
}
