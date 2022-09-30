#include <stdio.h>

/**
 * main - Countes the nunmber of the total argumets
 * @argc: counts the number of argumets
 * @argv: the string of all argumets
 * Return - zero
 */
 
 int main (int argc, char* argv[])
 {
     int i;
     for (i = 0; i < argc; i++)
     {
         printf ("%s\n", argv[i]);
     }
     return (0);
 }
