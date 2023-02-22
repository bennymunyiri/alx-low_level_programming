#include "main.h"
/**
 * main - Entry point
 * Description: printing 10 times
 * Return: Always zero
 */
void print_alphabet_x10(void)
{
	int i;
	int n = 10;
	for (n = 0; n < 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
