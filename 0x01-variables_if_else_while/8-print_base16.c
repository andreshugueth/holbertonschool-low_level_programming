#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
char b;
a = 48;
b = 97;
while (a <= 57)
{
putchar(a);
a++;
}
while (b <= 102)
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
