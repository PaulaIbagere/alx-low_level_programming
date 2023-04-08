#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: first parameter
 * @argv: second parameter
 * Return: 1
 */
int main(int argc, char **argv)
{
	int i;
	int result = 1;

	if (argc ==  3)
	{
		for (i = 1; i < argc; i++)
		{
			int x;

			x = strtol(argv[i], NULL, 10);
			result = result * x;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
