#include <stdio.h>

/**
 * main - printd the address of an array
 *
 * Retrun: Always 0
 */
int main(void)
{
	char b[98];

	printf("b: %p\n", b);	/* b type of 'char *' */
	printf("&b: %p\n", &b);	/* b type of 'char[98]', &b type of 'char (*)[98]' */

	return (0);
}
