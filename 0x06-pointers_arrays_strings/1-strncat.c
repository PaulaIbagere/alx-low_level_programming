#include "main.h"
#include <string.h>
/**
 * *_strncat - Function to concatinate strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
