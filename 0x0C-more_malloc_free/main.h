<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H

void _print(char *str, int l);
char *mul(char n, char *num, int num_index, char *dest, int dest_index);
int check_for_digits(char **av);
void init(char *str, int l);
#include <stdio.h>
#include <stdlib.h>
=======
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

>>>>>>> 5c56a3dad7cee0bbb71a3ee037263763ac1992d0
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
<<<<<<< HEAD
=======
void errors(void);
int _strlen(char *s);
int is_digit(char *s);
>>>>>>> 5c56a3dad7cee0bbb71a3ee037263763ac1992d0

#endif
