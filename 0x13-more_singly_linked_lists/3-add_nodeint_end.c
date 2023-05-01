#include "lists.h"
/**
 * add_nodeint_end - to add node to the end of the list
 * @head: pointer to the head
 * @n: data to insert in the new element
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	/*allocate node*/
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	/*put in data*/
	new_node->n = n;

	/*new node next is going to be null*/
	new_node->next = NULL;

	/*if list is empty, make new_node head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*transverse till the last node*/
	while (temp->next != NULL)
		temp = temp->next;

	/*change the next of the last node*/
	temp->next = new_node;
	return (new_node);
}
