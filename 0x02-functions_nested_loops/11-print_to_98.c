#include "holberton.h"
# include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: An ascii char to compare
 * Return: Always 0.
 */
void print_to_98(int n)
{

	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
}
