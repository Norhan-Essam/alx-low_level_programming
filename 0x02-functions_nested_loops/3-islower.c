#include <stdio.h>

/**
 * _islower - Checks for lowercase character
 * @c: The charcter tobe checked
 * Return: 1 for lowercase character or a 0 for anything else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
