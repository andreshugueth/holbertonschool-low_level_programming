#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int a;

	for (a = 'A' ; a <= 'z' ; a++)
	{
		if (a == c)
		{
			return (1);
		}
	}
	return (0);
}
