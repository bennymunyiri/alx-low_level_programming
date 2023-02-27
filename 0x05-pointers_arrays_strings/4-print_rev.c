#include "main.h"
#include <stdio.h>
/**
 * print_rev - in reverse order
 * @s: is the word
 * Return: in rev order
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] = '\0')
	{
		len++
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
