#include <stdio.h>
/**
 * main - Entry point
 * description: Except q  and e
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 97)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	return (0);
}
