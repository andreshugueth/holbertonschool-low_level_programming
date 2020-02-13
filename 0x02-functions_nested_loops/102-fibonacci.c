#include <stdio.h>

/**
 * calculate_fibonacci - Calculate the first 50 Fibonacci numbers
 */
void calculate_fibonacci(void)
{
	long int i, a, b, d;

	a = 1;
	b = 2;

	printf("%li, %li, ", a, b);
	for (i = 0; i <= 47; i++)
	{
		d = b;
		b = b + a;
		a = d;
		if (i != 47)
			printf("%li, ", b);
		else
			printf("%li\n", b);
	}
}

/**
 * main - check the code for Holberton School students.
 * Return: Return always 0
 */
int main(void)
{
	calculate_fibonacci();
	return (0);
}
