#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - function to chech string for digits
 * @str: string
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - main function
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int to_int;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc < 1)
		{
			printf("0\n");
		}
		if (check_num(argv[i]))
		{
			to_int = atoi(argv[i]);
			sum += to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
