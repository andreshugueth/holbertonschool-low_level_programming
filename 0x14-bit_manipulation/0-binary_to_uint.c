#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to uns int
 * @b: binary number
 *
 * Return: 0 if fails, number if succeed
 */
unsigned int binary_to_uint(const char *b)
{
	int i, k;
	unsigned int sum;

	if (b == NULL)
		return (0);

	sum = 0;
	k = 1;

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	i--;

	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += k;
		k *= 2;
	}

	return (sum);
}

