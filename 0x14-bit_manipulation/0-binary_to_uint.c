#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0;
	int len = strlen(b);
	int dec_val = 1;

	if (!b)
		return (0);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
		{
			total += dec_val;
		}
		dec_val *= 2;
	}
	return (total);
}
