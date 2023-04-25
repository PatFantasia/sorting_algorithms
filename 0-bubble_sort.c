#include "sort.h"
/**
 * bubble_sort - the entrance for the bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Returns void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * check_arraysort - checks for sortedness
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: 0 if sorted -1 if not
 */
int check_arraysort(int *array, size_t size)
{
	unsigned long int i;

	for (i = 0; i < (size - 1); i++)
	{
		if (array[i] > array[i + 1])
			return (-1);
	}
	return (0);
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
