#include "main.h"
/**
 * print_most_numbers - Print again all numbers except from 2 and 4
 * Description: printing number except 2 or 4
 * Return: Always zero
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
