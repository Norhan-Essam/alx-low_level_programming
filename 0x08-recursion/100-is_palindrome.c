#include "main.h"

/**
 * last_index - returns the last index of a string (counts the null char)
 * @n: pointer the string
 * Return: int
*/
int is_palindrome(char *n);
int check(char *n, int start, int end, int mod);
int last_index(char *n)
{
int m = 0;

if (*n > '\0')
	m += last_index(n + 1) + 1;

return (m);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @n: string to check
 * Return: 0 or 1
*/

int is_palindrome(char *n)
{
int end = last_index(n);

return (check(n, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 * @n: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @mod: int
 * @Return: 0 or 1
*/

int check(char *n, int start, int end, int mod)
{
if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	return (1);
else if (n[start] != n[end])
	return (0);
else
	return (check(n, start + 1, end - 1, mod));
}
