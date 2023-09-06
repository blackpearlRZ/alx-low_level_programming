#include <stdio.h>

/**
 * main - print the result of multications ofs two numbers
 * @argc: argument count
 * @argv: argument passed
 * Return: 1
 */
int main(int argc, char **argv)
{
	if (argc != 2)
		printf("Error\n");
	else
		printf("%d\n", argv[1] * argv[2]);
	return (1);

}


