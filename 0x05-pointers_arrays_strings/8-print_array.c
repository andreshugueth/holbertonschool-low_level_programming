#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array of integers
 * @a: Pointer
 * @n: Number of elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
