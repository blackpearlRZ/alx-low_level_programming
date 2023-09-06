#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: the argument count
 * @argv: the arguments
 * Return: all arguments
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
