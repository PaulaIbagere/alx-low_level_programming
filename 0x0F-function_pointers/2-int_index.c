#include "function_pointers.h"
/**
 * int_index - returns array index if comparison is true
 * @array: array
 * @size: size of array
 * @cmp: pointer function
 * Return: -1 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
