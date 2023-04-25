#include "sort.h"
/**
 * insertion_sort_list - the entrance of the insertion sort algorithm
 * @list: the list to sort
 *
 * Returns void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous, *compare;

	if (list == NULL || *list == NULL)
		return;
	if (((*list)->next) == NULL)
		return;
	previous = (*list);
	current = previous->next;
	while (current)
	{
		previous = current->prev;
		compare = previous;
		while (current->n < previous->n)
		{
			previous->next = current->next;
			current->prev = previous->prev;
			if (previous->prev)
				previous->prev->next = current;
			if (current->next)
				current->next->prev = previous;
			current->next = previous;
			previous->prev = current;
			if (current->prev)
				previous = current->prev;
			else
			{
				(*list) = current;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		if (current->n < compare->n)
			current = compare->next;
		else if (compare->next)
			current = compare->next->next;
		else
			current = compare->next;
	}
}
