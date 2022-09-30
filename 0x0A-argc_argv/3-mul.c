#include <stdio.h>
#include <stdlib.h>
/**
* main - Countes the nunmber of the total argumets
* @argc: counts the number of argumets
* @argv: the string of all argumets
* Return - 1 when error is present
*/

int main (int argc, char* argv[])
{
    int i = 1, mul = 1;
    
    if (argc > 1)
    {
        while (i < argc)
        {
            mul *= atoi(argv[i]);
            i++;
        }
        printf ("%d\n", mul);
	return (0);
    }
    else
    {
	    printf ("Error\n");
    		return (1);
    }
}
