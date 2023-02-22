#include "main.h"
/**
 * main - check the code
 * Description: All the numbers and there friends
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar('\n');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar('\n');
			}
		}
	}

}
