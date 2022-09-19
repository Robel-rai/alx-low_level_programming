#include "main.h"
#include <stdio.h>
/*
 * print_array - responsible for printing out the materials
 * @i: is the program itration determiner
 * @
 * Description: the program is going to print out an array. 
 * It will be from the stored array deppending on the give int n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
