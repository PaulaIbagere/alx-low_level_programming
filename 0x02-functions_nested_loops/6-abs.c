#include "main.h"
/**
 * _abs - for positive numbers
 * @a: parameter
 * Return: always 0
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
