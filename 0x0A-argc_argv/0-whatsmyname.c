#include <stdio.h>

/**
 * main - Entry point
 * @argv: Array containing the program command line arguments
 * @argc: The number of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
