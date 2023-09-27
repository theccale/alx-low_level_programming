#include "main.h"
/**
* print_listint - prints all the elements of a listint_t list.
* @h: the linked list of type listint
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{

	size_ num = 0;

	while (h)

	{

		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

