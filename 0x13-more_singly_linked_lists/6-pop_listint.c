#include "lists.h"

/**
 * pop_listint - it deletes the head node
 * of a listint_t list and returns the head node's data(n)
 * @head: pointer to the first element
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
