#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @s: number of elements of the array.
 * Return: no return.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');

}
