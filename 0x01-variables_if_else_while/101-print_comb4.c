#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints numbers of base 10 from 0.
 * Return: 0 (success)
 */
int main(void)
{
	long digit = 9876543210;
	long digit2;
	long digit3;

	int i;
	int j;
	int k;


	while ((digit / 10) != 0 || (digit % 10) != 0)
	{
		digit2 = digit / 10;
		i = digit % 10;
		while ((digit2 / 10) != 0 || (digit2 % 10) != 0)
		{
			j = digit2 % 10;
			digit3 = digit2 / 10;
			while ((digit3 / 10) != 0 || (digit3 % 10) != 0)
			{
				k = digit3 % 10;
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				digit3 = digit3 / 10;
			}
			digit2 = digit2 / 10;
	}
		digit = digit / 10;
	}
	putchar('\n');
	return (0);
}
