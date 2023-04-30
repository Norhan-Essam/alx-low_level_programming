#include "3-calc.h"

/**
 * main - check the code for The School students.
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: Always 0.
*/
int main(int argc, char **argv)
{
	int (*op_func)(int, int), q, d;

	if (argc != 4)
		printf("Error\n"), exit(98);

	q = atoi(argv[1]);
	d = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!d && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(q, d));
	return (0);
}
