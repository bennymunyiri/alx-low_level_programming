#include <stdio.h>
/**
 * print_name - prints a name using the provided function pointer
 * @name: the name to be printed
 * @f: a pointer to a function that takes a character pointer and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
