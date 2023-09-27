#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: pointer to the first element in the list
* @index: index to return
*
* Return: NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head:

	while(temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return(temp ? temp : NULL);
}
