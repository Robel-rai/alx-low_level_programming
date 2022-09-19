include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
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
