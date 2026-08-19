#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments passed
 * @argv: Array containing the program command line arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
