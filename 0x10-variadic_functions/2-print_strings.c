#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: the string separator
 * @m: the number of arguments
 * @...: the strings to print
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int m, ...)
{
	int e = m;
	char *str;
	va_list ap;

	if (!m)
	{
		printf("\n");
		return;
	}
	va_start(ap, m);
	while (e--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				e ? (separator ? separator : "") : "\n");
	va_end(ap);
}

