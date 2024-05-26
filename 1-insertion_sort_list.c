#include "sort.h"

/**
 * insertion_sort_list - Sorts a Doubly L.L. using insertion sort.
 * @list: Pointer to the head pointer of a DLL.
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prv, *nxt;

	if (list == NULL || *list == NULL)
		return;
	current = *list;
	while (current != NULL)
	{
		temp = current->next;

		while (current->prev != NULL && (current->prev->n > current->n))
		{
			prv = current->prev;
			nxt = current->next;
			if (nxt != NULL)
				nxt->prev = prv;
			current->prev = prv->prev;
			current->next = prv;
			if (prv->prev != NULL)
				prv->prev->next = current;
			else
				*list = current;
			prv->prev = current;
			prv->next = nxt;
			print_list(*list);
		}

		current = temp;
	}
}
