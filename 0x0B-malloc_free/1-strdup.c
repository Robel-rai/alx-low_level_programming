#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, amunt = 0;
	char *s;
	s = malloc(amunt * sizeof(*str)

	if (str == NULL)
		return (NULL);
	for (; str[amunt] != '\0'; size++)
		;

	s = malloc(size * sizeof(*str) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}