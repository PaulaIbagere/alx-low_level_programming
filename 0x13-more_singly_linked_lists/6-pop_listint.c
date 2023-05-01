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

	/*stroring the head in the temporary location*/
	temp = *head;

	/*moving the head to the next node*/
	*head = (*head)->next;
	num = (*head)->n;

	/*deleting the first node*/
	free(temp);
	return (num);
}
