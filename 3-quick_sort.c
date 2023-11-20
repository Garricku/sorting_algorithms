#include "sort.h"

/**
 * sort_array - Sort an array to have smaller values first, bigger values last.
 * @start_index: The starting index of the array to be sorted.
 * @end_index: The ending index of the array to be sorted.
 *
 * Return: Nothing/void
 *
 * void sort_array(int *array, int start_index, int end_index)
 * {
 * 	int i = start_index, n = end_index, 
 *	size_t size = (size_t)n + 1;
 *
 *	if (array == NULL)
 *		return;
 *	if (start_index == < 0 || end_index == < 0)
 *		return;
 *	for (i; i <= n; i++)
 *	{
 *		if (array[i] > array[n])
 *			swap_value(array[i], array[n]);
 *		print_array(array, size);
 *	}
 * }
 */

/**
 * quick_sort - Sorts an array of integers in ascending order using the Quick 
 * sort algorithm.
 * @array: The array that needs to be sorted.
 * @size: The size of the array.
 *
 * Return: Nothing/void.
 */
void quick_sort(int *array, size_t size)
{
	int total_size = (int)size, i = 0, j, k, temp, flag = 0, n = 0, pivot;

	/* If the array is a pointer to NULL.*/
	if (array == NULL)
		return;

	/* If the number of elements of the array is less than 1.*/
	if (size < 1 || total_size < 1)
		return;

	temp = array[0];
	pivot = array[0];
	j = total_size - (i + 1);
	while (n < total_size)
	{
		/* Compare values.*/
		for (i = 0; i < total_size - 1; i++)
		{
			/* Swap the values.*/
			if ( flag == 0 && pivot > array[j])
			{
				temp = j;
				array[0] = array[j];
				array[j] = pivot;
				print_array(array, size);
				flag = 1;
				i = 1;
				continue;
			}
			if (flag == 1 && array[i] > array[j])
			{
				array[temp] = array[i];
				array[i] = pivot;
				print_array(array, size);
				for (k = 0; k < i - 1; k++)
				{
					if (array[k] < array[k + 1])
					{
						temp = array[k];
						array[k] = array[k + 1];
						array[k + 1] = temp;
						print_array(array, size);
					}
				}
				i += k;
			}
		}
		n++;
	}
}
