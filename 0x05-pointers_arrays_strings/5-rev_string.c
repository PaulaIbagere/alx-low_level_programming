#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function to reverse string
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int g;

	len = strlen(s);
	for (g = len - 1; g >= 0; g--)
	{
		printf("%c", s[g]);
	}
	printf("\n");
}
