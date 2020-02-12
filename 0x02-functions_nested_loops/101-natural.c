#include <stdio.h>

/**
 * add_multiples - a the multiples of 3 and 5 below 1024
 */
void add_multiples(void)
{
	int i, a;

	a = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			a += i;
	}

	printf("%d\n", a);
}


/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	add_multiples();

	return (0);
}
