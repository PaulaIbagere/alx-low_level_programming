#include <stdio.h>
/*
 * main - main function
 * Return: always 0
 * for - for loop
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
