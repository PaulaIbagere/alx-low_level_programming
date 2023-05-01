#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to the first node in the list
 * @n: data to insert that new node
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/*allocate node*/
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/*put in new data*/
	new->n = n;
	/*make next of the new node as head*/
	new->next = *head;
	/*move the head to point to the new node*/
	*head = new;
	return (new);
}
