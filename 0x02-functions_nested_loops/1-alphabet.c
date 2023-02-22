#include "main.h"
/**
 * main - Entry point
 * Description: printing small letters
 * Return: Always return zero
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
