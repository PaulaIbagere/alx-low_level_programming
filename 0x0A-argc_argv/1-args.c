#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv; /*to ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
