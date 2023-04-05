#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @a: pointer to the string
 * Return: void
*/

void _puts_recursion(char *a)
{
	if (*a == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}
}
