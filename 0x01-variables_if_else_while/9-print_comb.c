#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints possible combinations of single digits.
 * Return: 0 (success)
 */
int main(void)
{
	long digit;
	int n;

	digit = 9876543210;

	while ((digit / 10) != 0 || (digit % 10) != 0)
	{
		n = digit % 10;
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit = digit / 10;
	}
	putchar('\n');
	return (0);
}
