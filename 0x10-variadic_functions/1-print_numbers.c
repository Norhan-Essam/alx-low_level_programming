#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @m: the number of arguments
 * @...: the integers to print
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int m, ...)
{
	int e = m;
	va_list ap;

	if (!m)
	{
		printf("\n");
		return;
	}
	va_start(ap, m);
	while (e--)
		printf("%d%s", va_arg(ap, int),
				e ? (separator ? separator : "") : "\n");
	va_end(ap);
}
