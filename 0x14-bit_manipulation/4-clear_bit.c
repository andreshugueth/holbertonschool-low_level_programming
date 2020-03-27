#include "holberton.h"
/**
 * clear_bit - set the value of a bit to 0
 * @n: number
 * @index: position to be changed
 * Return: 1 if succeed, 0 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = (~(1 << index) & *n);

	return (1);
}
