#include "main.h"
/**
 * puts2 - jumpes every odd number and prints the odd one
 * @str: points to the string
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
