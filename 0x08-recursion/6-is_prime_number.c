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
 * check_prime - check all number <  n if they can divide it
 * @n: int
 * @othrn: int
 * @Return: int
*/

int check_prime(int n, int othrn)
{

if (othrn >= n && n > 1)
	return (1);
else if (n % othrn == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, othrn + 1));
}
