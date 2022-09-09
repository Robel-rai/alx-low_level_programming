#include <stdio.h>

/**
 * main - main body
 * Description: Prints from prints all the 16 hex in lower case and Uppwercase
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = '0'; x <= '9'; ++x)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; ++x)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
