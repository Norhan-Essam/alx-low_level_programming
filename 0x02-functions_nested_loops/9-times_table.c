#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
	int num, muit, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (muit = 1; muit <= 9; muit++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * muit;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first digit*/

			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
