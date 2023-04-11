#include "main.h"

/**
 * _strlen - find length of a string
 * @q: string
 * Return: int
*/


int _strlen(char *q)
{
	int size = 0;

	for (; q[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
*/

char *str_concat(char *s1, char s2)
{
	int size1, size2, a;
	char *r;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	r = malloc(size1 + size2) * sizeof(char) + 1);
	if (r == 0)
		return (0);

	for (a = 0; a <= size1 + size2; i++)
	{
		if (a < size1)
			r[a] = s1[a];
		else
			r[a] = s2[a - size1];
	}
	r[a] = '\0';
	return (r);
}
