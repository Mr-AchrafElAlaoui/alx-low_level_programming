#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point, adds positive numbers
 * @argc: The number of command line arguments passed
 * @argv: Array containing the program command line arguments passed
 *
 * Return: 0 (Success), 1 (Error) contains symbols that are not digits.
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
