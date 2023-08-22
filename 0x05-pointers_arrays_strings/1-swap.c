#include "main.h"

/*
 * function that swaps the values of two integers
 * swap_int 
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
}	
