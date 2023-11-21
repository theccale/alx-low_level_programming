#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: pointer to the first element in the list
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *formerl = NULL;
	listint_t *nwlist = NULL;

	while (*head)
	{
		nwlist = (*head)->nwlist;
		(*head)->formerl = formerl;
		formerl = *head;
		*head = nwlist;
	}

	*head = formerl;

	return (*head);
}

