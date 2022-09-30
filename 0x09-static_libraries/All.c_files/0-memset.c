#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 *
 * @s: memory area
 * @b: char parameter
 * @n: number of bytes
 * 
 * Retunr: returns pointers to memo area s 
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = 0;

	while (len < n)
	{
		*(s + len) = b;
		len++;
	}
	return (s);
}
