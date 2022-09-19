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
	int san;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len%2 != 0)
	{
		san = (len+1)/2;
	}
	else
	{
		san = len/2;
	}
	for (i = san; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
