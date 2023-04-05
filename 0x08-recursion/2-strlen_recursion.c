#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @a: pointer to the  strting
 * Return: int
*/

int _strlen_recursion(char *a)
{
int m = 0;

if (*a > '\0')
{
	m += _strlen_recursion(a + 1) + 1;
}

return (m);
}
