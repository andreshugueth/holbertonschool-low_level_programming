#include "holberton.h"
/**
 * flip_bits - returns the number of fliped bits
 * @n: actual number
 * @m: number to be changed
 * Return: number of
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count;

	count = 0;
	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}

