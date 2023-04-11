#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function to copy string
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	char *string;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	string = malloc(sizeof(char) * (i + 1));
	if (string == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		string[j] = str[j];
	return (string);
}
