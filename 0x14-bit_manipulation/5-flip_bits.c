#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  a function that returns the number of
 * bits needed to flip to get from one number to another
 * @n: numbea
 * @m: another one
 * Return: numbea of bits needed for the flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int count = 0;

	while (xor_value)
	{
		count++;
		/* clear the least significant bit that is set */
		xor_value &= xor_value - 1;
	}

	return (count);
}
