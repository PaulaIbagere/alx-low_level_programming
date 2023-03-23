#include "main.h"
/**
 * _isupper - functio to get uppercase characters
 * @c: parameter
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
