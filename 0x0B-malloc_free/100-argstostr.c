#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
*/


int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - description
 * @ac: int
 * @av: arguments
 * Return: string
*/


char *argstostr(int ac, char **av)
{
	int a = 0, nc = 0, e = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++, nc++)
		nc += _strlen(av[a]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (e = 0; av[a][e] != '\0'; e++, cmpt++)
			s[cmpt] = av[a][e];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
