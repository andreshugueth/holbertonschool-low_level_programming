#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 97;
while (c <= 122)
{
if (c == 101 || c == 113)
{
c++;
}
putchar (c);
c++;
}
putchar ('\n');
return (0);
}
