#include "holberton.h"
/**
 * set_bit - set a value bit to 1
 * @n: number
 * @index: bit to be changed
 * Return: 1 if succeed, 0 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}

