#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list of type listint_t
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t x_num = 0;

	while (h)
	{
		x_num++;
		h = h->next;
	}

	return (x_num);
}
