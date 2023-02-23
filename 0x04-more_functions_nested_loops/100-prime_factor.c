#include "main.h"
/**
 * main - Entry point
 * Description: finding the largest prime number
 * return: Always 0
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i = 2;

	while (i <= n)
	{
		if (n % i == 0)
		{
			n /= i;
			if (n == 1)
			{
				_putchar(i + '0');
				_putchar('\n');
				break;
			}
			_putchar(i + '0');
			_putchar('*');
			i = 1;
		}
		i++;
	}
	return (0);

}
