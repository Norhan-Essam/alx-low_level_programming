#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: bytes.
 * Return: unsigmed int.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, o;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (o = 0; accept[o] != s[m]; o++)
		{
			if (accept[o] == '\0')
				return (m);
		}
	}
	return (m);
}
