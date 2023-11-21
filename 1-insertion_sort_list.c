#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: The list to be sorted.
 *
 * Return: Nothin/void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *sorted, *temp;

	/* If list points to NULL.*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	sorted = *list;
	node = (*list)->next;
	/* While the end of the list has not be reached.*/
	/* If the next node is bigger than the current node, swap.*/
	while (node != NULL)
	{
		temp = node->next;
		while (node->prev != NULL && node->n < node->prev->n)
		{
			if (node->next != NULL)
				node->next->prev = node->prev;
			node->prev->next = node->next;
			node->next = node->prev;
			node->prev = node->prev->prev;
			node->next->prev = node;
			if (node->prev == NULL)
				sorted = node;
			print_list(sorted);
		}
		node = temp;
	}
	*list = sorted;
}
