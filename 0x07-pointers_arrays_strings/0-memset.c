#include "main"

/*
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
	unsingned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
