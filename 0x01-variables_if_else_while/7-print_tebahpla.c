#include <stdio.h>

/**
 * main - main body
 * Description: Prints from A to Z in lower case in revers
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; --x)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
