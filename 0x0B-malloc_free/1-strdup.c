#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int a = 0, size = 0;
	char *r;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	/*+1 on the size puts the end of string character*/
	r = malloc(size * sizeof(*str) + 1);

	if (r == 0)
	{
		return (NULL);
	}
	else
	{
		for (; a < size; a++)
			r[a] = str[a];
	}
	return (r);
}
