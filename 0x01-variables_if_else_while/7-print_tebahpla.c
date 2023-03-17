#include <stdio.h>
/**
 * main - main function
 * Return: alwayse 0
 * for - for loop
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
