#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * is_space - checks if a character is a whitespace character
 * @c: the character to check
 * Return: 1 if c is a space, tab, or newline character, otherwise 0
 */
int is_space(char c)
{
    return c == ' ' || c == '\t' || c == '\n';
}
int count_words(char *str)
/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 * Return: the number of words in str
 */
{
    int count = 0;
    int i, len;

    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
        {
            count++;
        }
    }
    return (count);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words), or NULL if str is NULL or ""
 */
char **strtow(char *str)
{
    int i, j, k;
    int len, num_words;
    char **words;

    if (str == NULL || *str == '\0')
    {
        return (NULL);
    }
    num_words = count_words(str);
    words = malloc(sizeof(char *) * (num_words + 1));
    if (words == NULL)
    {
        return (NULL);
    }
    len = strlen(str);
    for (i = 0, j = 0; i < len && j < num_words; i++)
    {
        if (!is_space(str[i]))
        {
            k = 0;
            while (!is_space(str[i + k]) && (i + k) < len)
            {
                k++;
            }
            words[j] = malloc(sizeof(char) * (k + 1));
            if (words[j] == NULL)
            {
                for (i = 0; i < j; i++)
                {
                    free(words[i]);
                }
                free(words);
                return (NULL);
            }
            strncpy(words[j], str + i, k);
            words[j][k] = '\0';
            j++;
            i += k;
        }
    }
    words[num_words] = NULL;
    return (words);
}
