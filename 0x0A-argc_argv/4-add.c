#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i,j,sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (argv[i][j] == '-')
		{
			printf("Error\n");
			return (1);
		}
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
