#include <stdio.h>

/**
 * main - main body
 * Description: Prints from A to Z in lower case except e and q
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
