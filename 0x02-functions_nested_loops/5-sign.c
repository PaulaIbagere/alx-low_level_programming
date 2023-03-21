#include "main.h"
/**
 * print_sign - function to print the sign of variables
 *
 * @n: parameter
 *
 * Return: as follows
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	return (0);
}
