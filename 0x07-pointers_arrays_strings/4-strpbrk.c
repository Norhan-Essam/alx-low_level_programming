#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int m, o;
	char *r;

	m = 0;
	while (s[m] != '\0')
	{
		o = 0;
		while (accept[o] != '\0')
		{
			if (accept[o] == s[m])
			{
				r = &s[m];
				return (r);
			}
			o++;
		}
		m++;
	}

	return (0);
}
