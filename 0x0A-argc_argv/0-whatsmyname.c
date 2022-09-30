#include <stdio.h>

/**
 * main - define argv
 * @argc: argumet counter
 * @argv: argumet vector
 *
 * Return - zero
 */
 
 int main (int argc, char *argv[])
 {
     int i;
     
    for (i = 0; i < argc; i++)
     {
         printf ("%s\n", argv[i]);
     }
 	return (0);
 }
