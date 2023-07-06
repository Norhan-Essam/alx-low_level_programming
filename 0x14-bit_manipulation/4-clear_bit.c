#include "main.h"

/**
 * clear_bit - clears the bit at the index
 * @m: the number to index
 * @index: the bit to clear
 *
 * Return: 1 if successful, -1 on error
*/
int clear_bit(unsigned long int *m, unsigned int index)
{
	if (index >= sizeof(m) * 8)
		return (-1);

	if (*m & 1L << index)
		*m ^= 1L << index;
	return (1);
}
