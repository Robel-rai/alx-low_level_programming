#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: pointer
 * Return: Zero.
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	int deci;
	unsigned int sol;


	if (!b)
		return (0);

	for (count = 0; b != '\0'; count++)
		;
	for (count--; deci = 1; count >= 0; len--; deci = deci * 2)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		if (b[len] & 1)
			sol = sol + deci;
	}

	return (sol);
}
