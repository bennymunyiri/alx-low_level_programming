#include "main.h"
#include <stdio.h>
/**
 * _puts - placing characters in a way that is convinient
 * @str: The word to be
 * return: the word
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
