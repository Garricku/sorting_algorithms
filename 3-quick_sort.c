#include "sort.h"

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
	int total_size = (int)size, i, j, temp, temp2;

	/* If the array is a pointer to NULL.*/
	if (array == NULL)
		return;

	/* If the number of elements of the array is less than 1.*/
	if (size < 1 || total_size < 1)
		return;

	while (i < total_size)
	{
		/* Compare values.*/
		for (i = 0; i < total_size; i++)
		{
			/* Swap the values.*/
			if (!temp && array[i] > array[total_size - (i + 1)])
			{
				j = total_size - i + 1;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			else if (temp < array[i])
			{
				temp2 = array[i];
				array[i] = temp;
				array[j] = temp2;
				print_array(array, size);
			}
		}
	}
}
