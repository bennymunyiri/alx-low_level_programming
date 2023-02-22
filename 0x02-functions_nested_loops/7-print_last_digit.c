#include <main.h>
/**
 * main - Entry point
 * Description: The last digit of the number
 * Return: value of the last digit
 */
int print_last_digit(int)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
