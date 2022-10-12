#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int n = 0;
	int nobytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nobytes = atoi(argv[1]);

	if (nobytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	while (n < nobytes)
	{
		printf("%02x", opc[n] & 0xFF);
		if (n != nobytes - 1)
			printf(" ");
		n++;
	}

	printf("\n");
	return (0);
}
