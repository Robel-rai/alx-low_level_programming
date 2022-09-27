#include "main.h"

/*
 * _strspn - a function that searches a string for any of 
 * a set of bytes.
 *
 * @s: the first string
 * @accept: subtracting parameter
 *
 * Return - the initial chars of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return (0);
}
