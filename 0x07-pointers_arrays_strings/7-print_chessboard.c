#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: Pointer
 * Return: Destination memory
 **/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (a[i][j] >= 'a' && a[i][j] <= 'z')
			{
				_putchar(a[i][j]);
			}
			else if (a[i][j] >= 'A' && a[i][j] <= 'Z')
			{
				_putchar(a[i][j]);
			}
			else if (a[i][j] == ' ')
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

