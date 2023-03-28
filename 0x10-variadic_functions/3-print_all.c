#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char
 *
 * @valist: list of arguments
 */
void print_all(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_integer - Prints an integer
 *
 * @valist: list of arguments
 */
void print_all(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - Prints a float
 *
 * @valist: list of arguments
 */
void print_all(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - Prints a string
 *
 * @valist: list of arguments
 */
void print_all(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything
 *
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j;
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
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
