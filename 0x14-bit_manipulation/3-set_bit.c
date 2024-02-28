#include <stdio.h>
#include "main.h"

/**
 * set_bit -  a function that sets the value of
 * bit to 1 at a given index
 * @n: specific numbea ptr
 * @index: bit to be set index
 * Return: -1 if fail, 1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
