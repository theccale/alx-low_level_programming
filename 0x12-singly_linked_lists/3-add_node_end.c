#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: double pointer to the list_t list
* @str: string to put in the new node
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
		list_t *nnew;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nnew = malloc(sizeof(list_t));
	if (!nnew)
		return (NULL);

	nnew->str = strdup(str);
	nnew->len = len;
	nnew->next = NULL;

	if (*head == NULL)
	{
		*head = nnew;
		return (nnew);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nnew;

	return (nnew);
}

