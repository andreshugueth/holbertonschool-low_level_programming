#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints a character
 * @ap: list to be check
 * Return: void
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - prints an integrer
 * @ap: list to be check
 * Return: void
 */
void print_i(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_f - prints a float
 * @ap: list to be check
 * Return: void
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_s - prints a string
 * @ap: list to be check
 * Return: void
 */
void print_s(va_list ap)
{
	char *v;

	v = va_arg(ap, char*);
	if (v == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", v);
}
/**
 * print_all - prints anything
 * @format: format to be printed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *st = "";
	checker ops[] = {
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{"c", print_c}
	};

	va_start(ap, format);
	i = 0;
	j = 0;

	while (format != NULL && format[i] != 0)
	{
		while (j < 4)
		{
			if (format[i] == *(ops[j].p))
			{
				printf("%s", st);
				ops[j].f(ap);
				st = ", ";
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	va_end(ap);
}

