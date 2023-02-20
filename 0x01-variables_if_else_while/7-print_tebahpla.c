#include <stdio.h>
/**
 *main - ENTRY point
 *Description:In reverse order
 *Return: Always return zero
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
