#include <stdio.h>

/**
 * main - Countes the nunmber of the total argumets
 * @argc: counts the number of argumets
 * @argv: the string of all argumets
 * Return: 0 - success. 
 */
 
 int main (int argc, char *argv[]__attribute__((unused)))
 {
	 printf ("%d \n", argc - 1);
	 return (0);
 }
