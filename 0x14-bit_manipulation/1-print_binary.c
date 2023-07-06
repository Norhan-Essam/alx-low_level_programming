#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @m: the number to print
 *
 * Return: void
*/
void print_binary(unsigned long int m)
{
	int bit = sizeof(m) * 8, printed = 0;

	while (bit)
	{
		if (m && 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
