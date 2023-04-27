#include "lists.h"
/**
 * add_node - to add node to the begining of a list
 * @head: double pointer to the list_t list
 * @str: string to add
 * Return: adderess of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	/*allocate node*/
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/*put in the new data*/
	new->str = strdup(str);
	new->len = len;

	/*make next of new node as head*/
	new->next = (*head);

	/*move the head to poin to the new node*/
	(*head) = new;
	return (*head);
}
