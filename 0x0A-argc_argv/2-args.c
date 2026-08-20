#include <stdio.h>

/**
 * main - Entry point, prints all arguments it receives.
 * @argc: The number of command line arguments passed
 * @argv: Array containing the program command line arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
