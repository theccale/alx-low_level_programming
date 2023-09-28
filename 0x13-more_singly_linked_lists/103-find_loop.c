#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: pointer to the first element in the list
*
* Return: the address of the node where the loop starts,
* or NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gpat = head;
	listint_t *gpot = head;

	if (!head)
		return (NULL);

	while (gpat && gpot && gpot->next)
	{
		gpot = gpot->next->next;
		gpat = gpat->next;
		if (gpot == gpat)
		{
			gpat = head;
			while (gpat != gpot)
			{
				gpat = gpat->next;
				gpot = gpot->next;
			}
			return (gpot);
		}
	}

	return (NULL);
}
