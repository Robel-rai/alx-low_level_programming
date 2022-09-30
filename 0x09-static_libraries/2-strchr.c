#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 * @s: string parameter
 * @c: char parametr
 *
 * Return: a pointer to c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
	s++;
	if (*s == c)
	{
		return (s);
		}
	}
	return (0);
}
