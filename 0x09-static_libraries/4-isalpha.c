#include "main.h"

/**
 * _isalpha - check for lower case
 * Description: Checkes if an input is lower case of upper case
 * @c: c is an ascii character
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
