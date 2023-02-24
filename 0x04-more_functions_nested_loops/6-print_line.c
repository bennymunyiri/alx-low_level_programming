#include "main.h"
/**
 * print_line - printing  a line
 * @n: Length of the line
 * Description: Printing a line of any length using '_'
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0);
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
