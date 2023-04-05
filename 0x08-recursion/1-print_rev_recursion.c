#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @a: pointer to the string
 * *Return: void
*/

void _print_rev_recursion(char *a)
{
	if (*a > '\0')
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
