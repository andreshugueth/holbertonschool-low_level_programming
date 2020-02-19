#include "holberton.h"
/**
 * isnumber - checks if this variable is a number.
 * @c: variables num
 *
 * Return: returns (1) if it's true
 */
int isnumber(int c)
{
	return (c >= '0' && c <= '9');
}


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
		if (isnumber(s[i]))
		{
			n = (s[i] - '0') + n * 10;
			if (s[i + 1] == ' ')
			{
				break;
			}
		}
		else if (s[i] == '-')
		{
			x = x * -1;
		}
	}

	return (n * x);
}

