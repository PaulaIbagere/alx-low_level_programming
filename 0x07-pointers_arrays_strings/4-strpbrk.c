#include "main.h"
/**
 * *_strpbrk - searches string for any of the st of bytes
 * @s: string to search
 * @accept: bytes to be searched
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
