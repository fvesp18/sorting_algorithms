#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: list to be sorted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *Buff = NULL;
	listint_t *curr = *list;
	listint_t *next = NULL;

	Buff = (listint_t *) malloc(sizeof(listint_t));
	if (Buff == NULL)
		free(Buff);

	while (curr != NULL)
	{
		next = curr->next;

		if (*list == NULL || (*list)->n >= curr->n)
		{
			curr->next = *list;
			*list = curr;
		}
		else
		{
			curr = *list;
			while(curr->next != NULL && curr->next->n < curr->n)
			{
				curr = curr->next;
			}
			curr->next = next;
			curr->next = curr;
		}
		curr = next;
	}
	*list = Buff;
}
