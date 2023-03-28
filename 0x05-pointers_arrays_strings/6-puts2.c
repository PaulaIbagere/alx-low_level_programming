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
	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
