#include "main.h"
/**
 * print_numbers - Function to print numbers from 0 - 9
 * _putchar: print the characters
 * Retur: no return
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
