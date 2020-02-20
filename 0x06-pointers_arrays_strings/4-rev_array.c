#include "holberton.h"
/**
 * reverse_array - reverses the content of an array.
 * @a: array
 * @n: number of elements
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int j, k;

	for (j = 0; j < n / 2; j++)
	{
		k = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = k;
	}
}

