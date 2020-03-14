#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers & new line at the end
 * @separator: string
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(ap, int));
		}
		else if (i >= 1)
		{
			if (i == n - 1)
			{
				printf("%s%d\n", separator, va_arg(ap, int));
			}
			else
			{
				printf("%s%d", separator, va_arg(ap, int));
			}
		}
	}
	va_end(ap);
}

