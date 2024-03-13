#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The size of the array.
  * @value: The value to search for.
  *
  * Return: The first index where value is located, otherwise return -1.
  *
  */
int binary_search(int *array, size_t size, int value)
{
	size_t first_index = 0;
	size_t last_index = size - 1;
	size_t mid_index;

	if (array == NULL)
		return (-1);

	while (first_index <= last_index)
	{
		printf("Searching in array: ");
		for (size_t i = first_index; i <= last_index; i++)
		{
			printf("%d", array[i]);
			if (i != last_index)
				printf(", ");
		}
		printf("\n");
		mid_index = first_index + (last_index - first_index) / 2;

		if (value == array[mid_index])
			return (mid_index);
		else if (value > array[mid_index])
			first_index = mid_index + 1;
		else
			last_index = mid_index - 1;
	}

	return (-1);
}
