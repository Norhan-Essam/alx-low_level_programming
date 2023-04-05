#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if m is a prime number
 * @othrn: int
 * @m: int
 * Return: 0 or 1
*/

int check_prime(int m, int othrn);
int is_prime_number(int m)
{
return (check_prime(m, 2));
}

/**
 * check_prime - check all number  m if they can divide it
 * @m: int
 * @othrn: int
 * @Return: int
*/

int check_prime(int m, int othrn)
{

if (othrn >= m && m > 1)
	return (1);
else if (m % othrn == 0 || m <= 1)
	return (0);
else
	return (check_prime(m, othrn + 1));
}
