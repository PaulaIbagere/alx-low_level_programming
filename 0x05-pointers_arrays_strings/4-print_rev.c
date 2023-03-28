#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - function to reverse a string
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int g;

	len = strlen(s);
	for (g = len; g > 0; g--)
	{
		printf("%c", s[g]);
	}
	printf("\n");
}
