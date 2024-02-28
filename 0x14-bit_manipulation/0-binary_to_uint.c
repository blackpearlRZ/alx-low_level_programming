#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary numbea to an unsigned int.
 * @b: string of 0 and 1 chars ptr
 * Return: conversion result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numba;

	for (numba = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		numba <<= 1;
		numba += *b - '0';
	}
	return (numba);
}
