#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints numbers of base 10 from 0.
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
		digit = digit / 10;
	}
	putchar('\n');
	return (0);
}
