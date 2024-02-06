#include "search_algos.h"
/**
 * linear_search - use linear search to search
 *
 *  @array: array list of numbers.
 *  @size: size of the array.
 *  @value: the value that need to find
 * Return: the index of the value if it find - otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
