#include "holberton.h"
/**
 *  print_triangle- prints a square
 * @size: size of the square
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size - i - 1 ; j++)
			{
				_putchar(' ');
			}
			for (k = 0 ; k <= i ; k++)
			{
				_putchar('#');
				if (k == i)
				{
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
