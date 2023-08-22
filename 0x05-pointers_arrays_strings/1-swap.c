#include "main.h"

/*
 * swap_int _swaps integers values 
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
