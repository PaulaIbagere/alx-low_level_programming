#include "lists.h"
/**
 * pop_listint - delete the first node of a linked list
 * @head: pointer to head
 * Return: data inside deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	/*linked list is empty*/
	if (head == NULL || *head == NULL)
		return (0);

	/*moving the head to the next node*/
	num = (*head)->n;
	temp = (*head)->next;

	/*deleting the first node*/
	free(*head);
	*head = temp;

	return (num);
}
