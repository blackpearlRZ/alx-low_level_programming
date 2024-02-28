#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns
 * the value of a bit at a given index
 * @n: numba from wich we get bits
 * @index: indices count
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
