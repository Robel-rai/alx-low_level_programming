#include "main.h"
/**
 * put2 - jumpes every odd number and prints the odd one
 * @i: input string.
 * Return: the pointer to dest.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
