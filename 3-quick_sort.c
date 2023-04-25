#include "sort.h"
/**
 * quick_sort - the entrance for the quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Returns void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	sort_quickly(array, 0, size - 1, size);
}
/**
 * sort_quickly - recursively implement quick sort on an array
 * @array: array to be sorted
 * @low: the end position of elements less than pivot
 * @high: the position compared to pivot
 * @size: size of the array
 *
 *Return: Void.
 */
void sort_quickly(int *array, int low, int high, size_t size)
{
	int piv;

	if (high > low)
	{
		piv = partition(array, low, high, size);
		sort_quickly(array, low, piv - 1, size);
		sort_quickly(array, piv + 1, high, size);
	}
}

/**
 * partition - partitions the array during sorting
 * @array: the array to be partitioned
 * @low: low end of array
 * @high: high end of array
 * @size: size of the array
 * Return: index of the next pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, piv, temp;

	piv = array[high];
	for (j = low, i = low - 1; j < high; j++)
	{
		if (array[j] < piv)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = piv;
	array[high] = temp;
	if (array[high] != array[i + 1])
		print_array(array, size);
	return (i + 1);
}
