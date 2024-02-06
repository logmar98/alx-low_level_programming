#include "search_algos.h"


/**
 * sub_search - sub binary using the Binary search algorithm
 *  @array: array list of numbers.
 *  @size: size of the array.
 *  @value: the value that need to find
 * Return: index of the number
 */
int sub_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (sub_search(array, mid, value));

	mid++;

	return (sub_search(array + mid, size - mid, value) + mid);
}
/**
 * binary_search - use binary search to search
 *
 *  @array: array list of numbers.
 *  @size: size of the array.
 *  @value: the value that need to find
 * Return: the index of the value if it find - otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int result;

	result = sub_search(array, size, value);

	if (result >= 0 && array[result] != value)
		return (-1);

	return (result);
}
