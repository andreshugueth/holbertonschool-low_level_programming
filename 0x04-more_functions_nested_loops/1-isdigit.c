#include "holberton.h"

/**
 * _isdigit - checks for a digit.
 * @c: An ascii char to compare
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c  >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
