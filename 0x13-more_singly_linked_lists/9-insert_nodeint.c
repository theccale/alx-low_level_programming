#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to the first element in the list
* @n: data to insert in the new element
* @idx: index of the list where the new node should be added
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnd;
	listint_t *temp = *head;

	newnd = malloc(sizeof(listint_t));
	if (!newnd || !head)
		return (NULL);

	newnd->n = n;
	newnd->next = NULL;

	if (idx == 0)
	{
		newnd->next = *head;
		*head = newnd;
		return (newnd);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnd->next = temp->next;
			temp->next = newnd;
			return (newnd);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
