#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, multiplies two numbers
 * @argc: The number of command line arguments passed
 * @argv: Array containing the program command line arguments passed
 *
 * Return: 0 (Success), 1 (Error) if does not receive two arguments.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);

}
