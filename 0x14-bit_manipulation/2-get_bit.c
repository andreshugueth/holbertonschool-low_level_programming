#include "holberton.h"
/**
 * get_bit - value of a bit at a given pos
 * @n: number
 * @index: position
 * Return: bit asked for
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);

	return ((n >> index) & 1);
}
