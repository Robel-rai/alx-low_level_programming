#include <stdio.h>

/**
 * main - main body
 * Description: Prints from A to Z in lower case and Uppwercase
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; ++x)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
