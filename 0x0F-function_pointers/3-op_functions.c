#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of two int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: first number
 * @b: second number
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first number
 * @b: second number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two int
 * @a: first number
 * @b: second number
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the div
 * @a: first number
 * @b: second number
 * Return: modul
 */
int op_mod(int a, int b)
{
	if ( b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

