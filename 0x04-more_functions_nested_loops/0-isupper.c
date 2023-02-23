#include "main.h"
/**
 * _isupper - Checks for uppercase letters.
 * @c: The character to be checked.
 * Description: Checking for uppercase letters
 * Return: 1 if upper 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
