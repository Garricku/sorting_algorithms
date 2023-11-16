#include "sort.h"

/**
 * insetion_sort - Sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm.
 * @list: The list to be sorted.
 *
 * Return: Nothin/void.
 */
void insertion_sort_list(listint_t **list)
{
	int i;
	listint_t **prev_node = list, **node = list, **next_node = list;

	/* If list points to NULL.*/
	if (list == NULL)
		return;

	/* While the end of the list has not be reached.*/
	while (list->next != NULL)
	{
		if (node->n > next_node->n)
		{
			temp = node->n;
			node->next = next_node->prev;
			node->n = next_node->n
			next_node->n = temp
		}
	}
}
