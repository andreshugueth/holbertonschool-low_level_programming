#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 * @c: An ascii char to compare
 * Return: Always 0.
 */
int _islower(int c)
{
	int a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == c)
		{
			return (1);
		}
	}
	return (0);
}
