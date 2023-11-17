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
	listint_t *current, *sorted, *temp;

	/* If list points to NULL.*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	sorted = *list;
	current = (*list)->next;
	/* While the end of the list has not be reached.*/
	while (current != NULL)
	{
		temp = current->next;
		/* If the next node is bigger than the current node, swap.*/
		while (current->prev != NULL && current->n < current->prev->n)
		{
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->prev->next = current->next;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			print_list(list);
			/* If the previous node is > than the new next node.*/
			if (current->prev == NULL)
				sorted = current;
			print_list(*list);
		}
		current = temp;
	}
	*list = sorted;
}
