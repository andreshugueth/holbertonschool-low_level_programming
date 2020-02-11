#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Entry point
 *@i: An ascii char to compare
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
