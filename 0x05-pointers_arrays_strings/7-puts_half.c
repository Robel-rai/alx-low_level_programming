#include main.h

/*
 * puts_half - function responsible for writing the 2nd half of a string
 * @i: iteration program
 * @n: number of the half
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	n = (sizeof(str)/2);

	for (int i; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
