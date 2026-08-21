#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, prints the minimum number of coins to make change 
 * for an amount of money.
 * @argc: The number of command line arguments passed
 * @argv: Array containing the program command line arguments passed
 *
 * Return: 0 (Success), 1 (Error) arguments passed is not exactly to 1.
 */
int main(int argc, char *argv[])
{
	int coins;
	int cents;

	if (argc != 2 )
	{
		printf("Error\n");
		return (1);
	}
	
	coins = 0;
	cents = atoi(argv[1]);

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}

	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}

	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}

	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}

	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	printf("%d\n", coins);

	return (0);
}
