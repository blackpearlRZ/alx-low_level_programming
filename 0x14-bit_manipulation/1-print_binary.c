#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints
 * the binary representation of a numbea
 * @n: numbea to printed
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
