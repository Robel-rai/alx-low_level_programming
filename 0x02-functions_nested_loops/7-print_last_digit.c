#include "main.h"

/**
 * print_last_digit - prints the last digit
 * Description: Tells the last digit of our function
 * @b: b is an integr
 * Return: 0
 */

int print_last_digit(int b)
{
	int lasdi;

	lasdi = b % 10;
	if (lasdi < 0)
	{
		lasdi = lasdi * -1;
	}
	_putchar(lasdi + '0');
	return (lasdi);
}
