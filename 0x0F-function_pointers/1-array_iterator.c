#include "function_pointers.h"
/**
 * array_iterator - prints each array element
 * @array: array
 * @size: size of array
 * @action: pointer to print in regular or hex
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
