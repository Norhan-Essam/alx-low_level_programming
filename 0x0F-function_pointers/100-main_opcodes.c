#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for The School students.
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: Always 0.
*/
int main(int argc, char **argv)
{
	char *o = (char *)main;
	int d;

	if (argc != 2)
		printf("Error\n"), exit(1);
	d = atoi(argv[1]);
	if (d < 0)
		printf("Error\n"), exit(2);

	while (d--)
		printf("%02hhx%s", *o++, d ? " " : "\n");
	return (0);
}
