#include <stdio.h>
/**
 *main - Entry point
 *Description: properly
 *Return: Always return zero
 */
int main(void)
{
	int n;
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
