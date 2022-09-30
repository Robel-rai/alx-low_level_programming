#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: counts the number of argumets.
 * @argv: the string of all argumets.
 * Return: 0 - success.
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
