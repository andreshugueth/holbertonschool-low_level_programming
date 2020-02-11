#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 *@a: An ascii char to compare
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	return (a * -1);
}
