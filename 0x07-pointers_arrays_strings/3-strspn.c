#include "main"

/*
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: the first string
 * @accept: subtracting parameter
 *
 * Return - the initial number of bytes of s 
 * which are also present in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int x = leng(s);
	unsigned int y = leng(accept);
	unsigned int i, j;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			if (accept[j] == s[i])
			{  
				length++;
				break;
			}
			else if (accept[j + i] == '\0')
			{
				return (length);
			}
		}
	}
}

/*
 * leng - function that retunrs the length of s
 *
 * Return: length of s
 */

int leng(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
