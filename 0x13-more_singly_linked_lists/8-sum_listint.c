#include "lists.h"
/**
 * sum_listint - calculates the sum of all data in the list
 * @head: first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
