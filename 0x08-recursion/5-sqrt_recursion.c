#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @a: int
 * @val: square root
 * Return: int
*/
int square(int a, int val);
int _sqrt_recursion(int a)
{
return (square(a, 1));
}

/**
 * square - find square root
 * @a: int to find square root
 * @val: square root
 * Return: int
*/

int square(int a, int val)
{

if (val * val == a)
	return (val);
else if (val * val < a)
	return (square(a, val + 1));
else
	return (-1);

}
