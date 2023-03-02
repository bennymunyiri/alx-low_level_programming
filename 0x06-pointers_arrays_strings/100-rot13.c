#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *s = str;
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i]; i++)
		;
	for (j = 0; j < i; j++)
		if (str[j] >= 'A' && str[j] <= 'z')
			str[j] = rot13[str[j] - 'A'];
	return (s);
}
