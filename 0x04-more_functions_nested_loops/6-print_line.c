#include "main.h"

/**
 * print_line - print a line depending on the given n value
 * @n : is an integer
 * Return: noting
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}	
