#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @valist: argument list
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * print_integer - prints an integer
 * @valist: argument list
 */
void print_integer(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * print_float - prints a float
 * @valist: argument list
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * print_string - prints a string
 * @valist: argument list
 */
void print_string(va_list valist)
{
	char *s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j = 0;
	char *separator = "";
	print_fn print_fns[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;

		while (print_fns[j].symbol)
		{
			if (format[i] == print_fns[j].symbol)
			{
				printf("%s", separator);
				print_fns[j].print_func(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
