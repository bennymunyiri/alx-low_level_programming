#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: the string
 * return: always zero
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
