#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of things entered into the command line
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
