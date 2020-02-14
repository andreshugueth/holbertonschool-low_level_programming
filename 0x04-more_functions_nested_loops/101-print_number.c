#include "holberton.h"

/**
 * ReverseInt - Calculate the divisor of a number
 * @n: Number
 * Return: Divisor number
 */
int ReverseInt(int n)
{
	int i = 0;

	while (n > 0)
	{
		i = i * 10 + n % 10;
		n /= 10;
	}
	return (i);
}


#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n: number
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	n = ReverseInt(n);
	while (n > 0)
	{
		_putchar(n % 10 + '0');
		n = n / 10;
	}
}

