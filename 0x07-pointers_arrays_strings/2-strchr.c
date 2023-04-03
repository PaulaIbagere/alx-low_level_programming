#include "main.h"
/**
 * *_strchr - string to find the first occurence of a charactr
 * @s: source
 * @c: character
 * Return: s + i
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
