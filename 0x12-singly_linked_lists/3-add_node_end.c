#include "lists.h"
/**
 * add_node_end - function to add node to the end of a linked list
 * @head: double pointer to list_t
 * @str: string to put the new node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	/*allocate node*/
	list_t *temp = *head;
	list_t *new;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	/*put in new data*/
	new->str = strdup(str);
	new->len = len;
	/**
	 * this new node is going to be the last node,
	 * so make the next NULL
	 */
	new->next = NULL;

	/*If the Linked list is empty, then make the new node as the head*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/*else transverse till the last node*/
	while (temp->next != NULL)
		temp = temp->next;

	/*change the next of the last node*/
	temp->next = new;
	return (new);
}
