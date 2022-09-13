#include "main.h"

/**
 * print_alphabet_x10 - print the albet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x;
	char let;

	for (x = 1; x <= 10; ++x)
	{
		for (let = 'a'; let <= 'z'; ++let)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
