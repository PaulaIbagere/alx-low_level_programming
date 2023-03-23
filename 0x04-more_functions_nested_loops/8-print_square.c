#include "main.h"
/**
 * print_square - function to print a square
 * @size: parameter
 */
void print_square(int size)
{
	int i;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
