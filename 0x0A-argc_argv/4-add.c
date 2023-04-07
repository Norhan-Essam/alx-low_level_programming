#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
*/
int main(int argc, char *argv[])
{
	int r;
	unsigned int a, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (r = 1; r < argc; r++)
		{
			c = argv[r];

			for (a = 0; a < strlen(c); a++)
			{
				if (c[a] < 48 || c[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
