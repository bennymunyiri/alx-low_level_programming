#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins += cents / 25;
	cents %= 25;
	num_coins += cents / 10;
	cents %= 10;
	num_coins += cents / 5;
	cents %= 5;
	num_coins += cents / 2;
	cents %= 2;
	num_coins += cents;
	printf("%d\n", num_coins);
	return (0);
}
