#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list,
* and returns the head node’s data (n).
* @head: pointer to the first element in the list
* Return: 0 if linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int my_num;

	if (!head || !*head)
		return (0);
	my_num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (my_num);
}

