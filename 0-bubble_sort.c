#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in asending order using bubble sort
 * @array: The array that contains the integers.
 * @size: The size of the array.
 *
 * Return: Nothing/void.
 */
void bubble_sort(int *array, size_t size)
{
	int i, n, temp = 0, sorted = 0, total_elements = (int)size;

	/* If the array pointed to is equal to NULL.*/
	if (array == NULL)
		return;

	/* If the size of the array is 0 or smaller.*/
	if (total_elements < 1 || size < 1)
		return;

	/* Iterate through the elements of the array.*/
	for (n = total_elements; n > 0; n--)
	{
		for (i = 0; i < n - 1; i++)
		{
			/* If the next element is smaller, swap the elements.*/
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			/* If an element was not swapped, increase the*/
			/* amount of already sorted elements.*/
			else
				sorted += 1;
		}
		/* If the amount of sorted elements is equal to the amount*/
		/* of total elements (size), then the array is sorted.*/
		if (sorted == total_elements)
			return;
	}
}
