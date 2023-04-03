#include "main.h"
/**
 * *_memcpy - function to copy memory areas
 * @dest: memory destination
 * @src: memory source
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
