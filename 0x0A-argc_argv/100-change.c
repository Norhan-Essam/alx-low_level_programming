#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints the minimum number of coins
 * to make change for an amount of money.
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of command line arguments.
 * Return:0-success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int a, leastcents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for(a = 0; a < 5; a++)
	{
		if (money >= cents[a])
		{
			leastcents += money / cents[a];
			money = money % cents[a];
			if (money % cents[a] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
