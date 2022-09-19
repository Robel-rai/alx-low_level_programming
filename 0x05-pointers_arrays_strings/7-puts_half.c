#include "main.h"

/*
 * puts_half - function responsible for writing the 2nd half of a string
 * @i: iteration program
 * @n: number of the half
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}
	
	for (int i = (len + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
