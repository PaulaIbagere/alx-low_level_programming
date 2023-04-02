#include "main.h"
#include <stddef.h>
/**
 * *_strcpy - function to copy strings from one place to another
 * @dest: destination
 * @src: source
 * Return: NULL or dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
