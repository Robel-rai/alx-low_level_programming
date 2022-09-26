#include "main.h"

/*
 * *_strchr - a function that locates a character in a string.
 *
 * @s: string parameter
 * @c: char parametr
 *
 * Return: a pointer to c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
	{
		if (s[i] == c)
		{
			return (&s[i])
		}
		else 
		{
			return (NULL);
		}
	}
}
