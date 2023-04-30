#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @m: the number of arguments
 * @...: the integers to sum
 *
 * Return: the integer sum
*/
int sum_them_all(const unsigned int m, ...)
{
	int z = 0, e = m;
	va_list ap;

	if (!m)
		return (0);
	va_start(ap, m);
	while (e--)
		z += va_arg(ap, int);
	va_end(ap);
	return (z);
}
