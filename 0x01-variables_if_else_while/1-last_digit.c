#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Takes a Rundome number n
 * and makes checks if it's ast digit is >5 =0 to diplay a massage
 * Return: 0
*/
int main(void)
{
	int n;
	int Ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ld = n % 10;
	printf("Last digit of %i is %i ", n, Ld);
		if (Ld > 5)
			printf("and is greater than 5\n");
		else if (Ld == 0)
			printf("and is 0\n");
		else
			printf("and is less than 6 and not 0\n");
	return (0);
}
