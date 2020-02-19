#include "holberton.h"
/**
 * _atoi - convert a string to an integer.
 * @s: Pointer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	unsigned int n, i;
	int x;

	x = 1;
	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] >= '9')
		{
			if (n >= '0' && n <= '9')
			{
				n = (s[i] - '0') + n * 10;
				if (s[i + 1] == ' ')
				{
					break;
				}
			}
			else
			{
				return (0);
			}
		}
		else if (s[i] == '-')
		{
			x = x * -1;
		}
	}

	return (n * x);
}

