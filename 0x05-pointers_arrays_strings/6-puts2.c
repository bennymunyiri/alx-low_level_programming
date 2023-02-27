#include "main.h"
#include <string.h>
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * Return: always zero
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
