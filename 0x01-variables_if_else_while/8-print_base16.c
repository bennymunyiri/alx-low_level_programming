#include <stdio.h>
/**
 * main - Entry point
 * Description: all hexadecimals
 * Return: always return zero
 */
int main(void)
{
	int n;
	int m;

	for (m = 48; n <= 57; m++)
	{
		putchar(n);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return(0);
}
