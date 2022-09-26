#include "main.h"

/**
 * print_diagsums - prints the sum of the 2 diagonals
 * of a square matrix of integers
 *
 * @a: array
 * @size: size of array
 *
 * Return: Nothing(void)
 */

void print_diagsums(int *a, int size)
{
	int i, r, s1 = 0, s2 = 0;

	for (r = 0; r < size; r++)
	{
		i = (r * size) + r;
		s1 += a[i];

	}
	for (r = 1; r <= size; r++)
	{
		i = (r * size) - r;
		s2 += a[i];
	}

	printf("%d, %d\n", s1, s2);
}
