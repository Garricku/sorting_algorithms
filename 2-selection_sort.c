#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 * Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: Nothing/void.
 */
void selection_sort(int *array, size_t size)
{
	int i, n = 0, smallest, temp, index_removed, total_size = (int)size;

	/* If the array is empty or doesn't exsist.*/
	if (array == NULL)
		return;

	/* If the size of the array is 0 or smaller.*/
	if (size < 1 || total_size < 1)
		return;

	smallest = array[n];
	index_removed = 0;
	/* Iterate through the elements.*/
	while (n < total_size)
	{
		while (i < total_size - 1)
		{
			/* Swap the values.*/
			if (i >= n && smallest > array[i + 1])
			{
				index_removed = i + 1;
				smallest = array[i + 1];
			}
			i++;
		}
		temp = array[n];
		array[n] = smallest;
		array[index_removed] = temp;
		print_array(array, size);
		n += 1;
	}
}
