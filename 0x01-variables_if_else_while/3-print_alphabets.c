#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char d;
c = 97;
d = 65;
while (c <= 122)
{
putchar (c);
c++;
}
while (d <= 90)
{
putchar (d);
d++;
}
putchar ('\n');
return (0);
}
