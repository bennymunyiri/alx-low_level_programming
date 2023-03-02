#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
    int i = 0;

    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = toupper(s[i]);
    for (i = 1; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            switch (s[i - 1])
            {
                case ' ': case '\t': case '\n':
                case ',': case ';': case '.': case '!':
                case '?': case '"': case '(': case ')':
                case '{': case '}':
                    s[i] = toupper(s[i]);
            }
        }
    }
    return (s);
}
