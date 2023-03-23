#include "main.h"
/**
 * _isdigit - Function to find digits from 0 - 9
 * @c: parameter
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
