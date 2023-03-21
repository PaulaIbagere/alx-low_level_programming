#include "main.h"
/**
 * jack_bauer - function
 * Return: always 0
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0'); /*for the first digit of the hour*/
			_putchar(i % 10 + '0');/* for the second digit of the hour*/
			_putchar(':');
			_putchar(j / 10 + '0');/*for the first digit of the minutes*/
			_putchar(j % 10 + '0');/*for the second digit of the minutes*/
			_putchar('\n');
		}
	}
}
