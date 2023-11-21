#include "lists.h"

/**
* free_listint_safe - frees a listint_t list.
* pointer to the first element in the list
* @h: pointer holdet
* Return: the  size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int uniqq;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		uniqq = *h - (*h)->next;
		if (uniqq > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}

		*h = NULL:

		return (len);
}

