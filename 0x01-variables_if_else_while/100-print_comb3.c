#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints different possible combinations.
 * Return: 0 (success)
 */
int main(void)
{
	long digit = 9876543210;
	long digit2;

	int i;
	int j;

	while ((digit / 10) != 0 || (digit % 10) != 0)
	{
		digit2 = digit / 10;
		i = digit % 10;
		while ((digit2 / 10) != 0 || (digit2 % 10) != 0)
		{
			j = digit2 % 10;
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			digit2 = digit2 / 10;
		}
		digit = digit / 10;
	}
	putchar('\n');
	return (0);
}
