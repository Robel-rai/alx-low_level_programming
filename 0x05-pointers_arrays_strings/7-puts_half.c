#include "main.h"

/*
 * put_half - prints the second half of the string
 * @len: gets the starting number
 * @i: iteration program
 * @n: number of the half
 * Description: if striung size is odd the len+1/2 will solve it.
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
	if (len % 2 != 0)
	{
		san = (len + 1) / 2;
	}
	else
	{
		san = len / 2;
	}
	for (i = san; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
