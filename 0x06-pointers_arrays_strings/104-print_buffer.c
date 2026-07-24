#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: Pointer to buffer
 * @size: The size of buffer to print
 */
void print_buffer(char *b, int size)
{
	int i, j;
	char *chunk;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		chunk = b + i;
		printf("%08x:", i);

		for (j = 0; j < 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");

			if (i + j < size)
				printf("%02x", chunk[j]);
			else
				printf("  ");
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (chunk[j] >= ' ' && chunk[j] <= '~')
					printf("%c", chunk[j]);
				else
					printf(".");
			}
		}

		printf("\n");
	}
}
