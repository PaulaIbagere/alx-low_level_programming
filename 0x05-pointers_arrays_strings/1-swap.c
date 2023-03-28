#include "main.h"
/**
 * swap_int - function to swap values
 * @a: first parameter
 * @b: second parameter
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
