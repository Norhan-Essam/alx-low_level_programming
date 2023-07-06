#include "main.h"

/**
 * flip_bits - return number of bits that would need to be flipped to
 * transform one number to another
 *
 * @g: first number
 * @q: second number
 *
 * Return: number of bits to flip to convert numbers
*/
unsigned int flip_bits(unsigned long int g, unsigned long int q)
{
	unsigned long int xorval = g ^ q;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
