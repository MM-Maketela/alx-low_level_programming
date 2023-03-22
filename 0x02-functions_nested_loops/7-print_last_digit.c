#include "main.h"
/**
 * print_last_digit - entry point
 * Description: prints the last digit of number.
 * @n: takes a paremeter of type int.
 * Return: the last digit of  n.
 */
int print_last_digit(int n)
{
	int x;
	long y;

	if (n < 0)
	{
		y = -(n % 10);
	}
	else
	{
		y = n;
	}
	x = (int) y % 10;
	_putchar('0' + x);

	return (x);

}
