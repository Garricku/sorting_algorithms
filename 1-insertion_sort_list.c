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
	listint_t *prev_node, *node, *next_node;

	/* If list points to NULL.*/
	if (list == NULL || *list == NULL)
		return;

	node = (*list)->next;
	/* While the end of the list has not be reached.*/
	while (node != NULL)
	{
		prev_node = node->prev;
		next_node = node->next;
		/* If the next node is bigger than the current node, swap.*/
		while (prev_node != NULL && prev_node->n > node->n)
		{
			prev_node->next = node->next;
			if (node->next != NULL)
				node->next->prev = prev_node;
			node->prev = prev_node->prev;
			node->next = prev_node;
			print_list(list);
			/* If the previous node is > than the new next node.*/
			if (prev_node->prev != NULL)
				prev_node->prev->next = node;
			else
				*list = node;
			prev_node->prev = node;
			prev_node = node->prev;
			print_list(*list);
		}
		node = next_node;
	}
}
