#include "main.h"

/**
 * print_alphabet - print alphabet
 * Description: prints the alpha bet
 * Return: 0
 */
void print_alphabet(void)
{
	char le;

	for (le = 'a'; le <= 'z'; ++le)
	{
		_putchar(le);
	}
	_putchar('\n');
}
