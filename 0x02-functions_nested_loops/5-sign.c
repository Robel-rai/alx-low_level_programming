#include "main.h"

/**
 * print_sign - comparison
 * Description: Checkes if checks if the given input is < > 0r = to zero
 * The print the singns + 0 -
 * @n: n is an ascii character
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
