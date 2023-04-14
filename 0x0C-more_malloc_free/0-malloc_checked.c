#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
