#include "sort.h"
/**
 * selection_sort - the entrance for the selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Returns void
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, min_index;

	if (array == NULL)
		return;

	for (i = 0; i < (size - 1) && size >= 2; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
/**
 * swap - swaps integers in an array
 * @first: 1st int
 * @second: 2nd int
 *
 * Returns void
 */
void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}
