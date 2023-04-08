#include <stdio.h>

/**
 * main - prints number of arguments into the program
 * @argc: array size
 * @argv: array elements
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", argc - 1);

	return (0);
}
