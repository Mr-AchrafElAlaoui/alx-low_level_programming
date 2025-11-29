#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit;
	int second_digit;
	int third_digit;

	for (first_digit = 48; first_digit <= 55; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 56; second_digit++)
		{
			for (third_digit = second_digit + 1; third_digit <= 57; third_digit++)
			{
				putchar(first_digit);
				putchar(second_digit);
				putchar(third_digit);

				if (first_digit != 55 || second_digit != 56 || third_digit != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
