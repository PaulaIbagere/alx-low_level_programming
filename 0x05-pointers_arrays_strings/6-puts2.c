#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - function to find even numbers
 * @str: parameter
 * Return: i
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	putchar('\n');
}
