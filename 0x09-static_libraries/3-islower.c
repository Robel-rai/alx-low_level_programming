#include "main.h"

/**
 * _islower - check for lower case
 * Description: Checkes if an input is lower case of upper case
 * @c: c is an ascii character
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
