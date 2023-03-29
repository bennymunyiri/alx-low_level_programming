#include <stdio.h>
#include <string.h>
/**
 * main - function of the code
 * @argc: argument count
 * @argv: an array of words that make the arg
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	if (argv != 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
