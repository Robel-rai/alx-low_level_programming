#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;
	
	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int amunt1, amunt2, i;
	char *s;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	amunt1 = _strlen(s1);
	amunt2 = _strlen(s2);
	s = malloc((amunt1 + amunt2) * sizeof(char) + 1);
	
	if (s == 0)
		return (0);

	for (i = 0; i <= amunt1 + amunt2; i++)
	{
		if (i < amunt1)
			s[i] = s1[i];
		else
			s[i] = s2[i - amunt1];
	}
	s[i] = '\0';
	return (s);
}
