#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * check - checks if chars r numbea
 * @s: string to be checked
 * Return: kinda depends
 */
int check(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}

/**
 * result - print result multiplication
 * @res: array of ints
 * @len: len of result
 * Return: jackshit
 */
void result(int *res, int len)
{
	int i;

	for (i = 0; i < len && res[i] == 0; i++)
		;

	if (i == len)
		printf("0");

	for (; i < len; i++)
		printf("%d", res[i]);

	printf("\n");
}

/**
 * main - multiplies nums
 * @ac: numbea args
 * @av: array of args
 * Return: 0
 */
int main(int ac, char **av)
{
	int i, j, num1_len, num2_len;
	int *res;

	if (ac != 3 || !check(av[1]) || !check(av[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1_len = strlen(av[1]);
	num2_len = strlen(av[2]);

	res = calloc(num1_len + num2_len, sizeof(int));
	if (res == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = num1_len - 1; i >= 0; i--)
	{
		for (j = num2_len - 1; j >= 0; j--)
		{
			int mul = (av[1][i] - '0') * (av[2][j] - '0');

			int sum = res[i + j + 1] + mul;

			res[i + j] += sum / 10;
			res[i + j + 1] = sum % 10;
		}
	}

	result(res, num1_len + num2_len);
	free(res);
	return (0);
}
