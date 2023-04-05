#include "main.h"

/**
 * _pow_recursion - Search a string for any of a set of bytes.
 * @m: base
 * @n: exposant
 * Return: Pointer to the byte in 's' that matches one of the bytes in accept
 * or NULL if no such byte is found.
*/

int _pow_recursion(int m, int n)
{

if (n < 0)
	return (-1);
else if (n == 1)
	return (m);
else if (n == 0)
	return (1);

return (m * _pow_recursion(m, n - 1));

}
