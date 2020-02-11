#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *@c: An ascii char to compare
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
