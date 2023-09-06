#include "main.h"

/**
 * _sqrt - finds the square root of two numbers
 * @n: first number
 * @y: second number
 * Return: square root
 */

int _sqrt(int n, int y)
{
	if (y * y > n)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt(n, y + 1));
}
/**
 * _sqrt_recursion - returns the naturel square root of n
 * @n: the number
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
