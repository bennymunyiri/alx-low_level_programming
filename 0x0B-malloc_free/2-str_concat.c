#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: On success, a pointer to a newly allocated string containing the
 * concatenated contents of s1 and s2. Otherwise, NULL.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    int len1 = 0, len2 = 0;


    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    len1 = strlen(s1);
    len2 = strlen(s2);
    concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concatenated == NULL)
        return (NULL);
    memcpy(concatenated, s1, len1);
    memcpy(concatenated + len1, s2, len2 + 1);
    return (concatenated);
}
