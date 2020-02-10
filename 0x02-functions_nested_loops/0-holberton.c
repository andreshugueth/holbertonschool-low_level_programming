#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *word;
	int i;

	word =  "Holberton";


	for (i = 0; i <= 9; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}

