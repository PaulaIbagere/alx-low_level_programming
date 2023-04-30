#include "lists.h"

/**
 * print_listint - function that prints all elements in listint_t list
 * @h: pointer to the list
 * Return: num
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
