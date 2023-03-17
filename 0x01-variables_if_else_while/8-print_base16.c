#include <stdio.h>
/**
 * main - main function
 * Return - always 0
 * for - for loop
 */
int main(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
