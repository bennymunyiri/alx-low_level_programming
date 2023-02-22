#include <main.h>
/**
 * main - Entry point
 * Descrption: Checking for small letters
 * Return: 1 if char is lower and 0 if upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
