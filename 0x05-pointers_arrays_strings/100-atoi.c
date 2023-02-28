#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			started = 1;
		}
		else if (started)
			break;
		s++;
	}
	return num * sign;
}
