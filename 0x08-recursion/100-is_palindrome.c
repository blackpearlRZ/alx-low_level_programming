#include "main.h"

/**
 * _strlen_recursion - returns the length of
 *	a string
 * @s: the string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (i);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pali_rec - compares characters of the string
 * @s: the string
 * @left: the beginning of s
 * @right: the end of s
 * Return: 1 if palindrome, 0 if not.
 */
int pali_rec(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (pali_rec(s, left + 1, right - 1));
}

/**
 * is_palindrome - checks if a string is
 *	a palindrome
 * @s: the string
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pali_rec(s, 0, len - 1));
}

