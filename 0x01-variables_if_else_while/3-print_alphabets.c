#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabets in lowercase and in uppercase
 * Return: always 0(success)
 */
int main(void)
{
	int n = 65;
	int m = 97;

	while (m <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 97)
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
