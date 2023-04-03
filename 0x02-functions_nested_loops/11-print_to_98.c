#include "main.h"
/**
 * print_to_98 - function to print number from n to 98
 * @n: parameter
 * Return: alwase 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
