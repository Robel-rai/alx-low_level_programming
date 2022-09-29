#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @len: int
 * @i: int
 * @n: int
 * @str: char type array
 * Description: If odd number of chars, print (length - 1) / 2
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
