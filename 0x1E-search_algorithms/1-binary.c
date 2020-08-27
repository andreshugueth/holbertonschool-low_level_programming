#include "search_algos.h"
/**
 * print_array - prints the array to analyze
 * @array: array to be printed
 * @left: left part of the array
 * @right: right part of the array
 * Return - Nothing
 *
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");

	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array to be analyzed
 * @size: size of the array
 * @value: value to be looked for
 *
 * Return: position where the value is located, or -1 on failure
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, left, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	middle = 0;
	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right =  middle - 1;
	}
	return (-1);
}
