#include <stdio.h>

/**
 * main - main body
 * Description: Prints from 0 to 9
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; ++x)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
