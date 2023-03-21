#include "main.h"
/**
 * _islower - function to find lower case
 *
 * @c: parameter to be passed
 *
 * Return: 1 if it is lovercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122) /*We are using ASCCI characters from a to z*/
		return (1);
	else
		return (0);
}
