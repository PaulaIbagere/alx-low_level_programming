#include "main.h"
/**
 * times_table - 9 times table
 * Return: always 0
 */
void times_table(void)
{
	int i;
	int j;
	int mult;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = i * j;
			_putchar(mult + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
