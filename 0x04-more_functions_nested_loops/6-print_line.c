#include "main.h"
/**
 * print_line - function to print line
 * @n: parameter
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
