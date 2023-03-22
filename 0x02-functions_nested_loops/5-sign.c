#include "main.h"
/**
 * print_sign - entry point
 * Description: checks the sign of n.
 * @n: takes a paremeter of type int.
 * Return: 1 (if n is positiv) 0 (if n is zero) and -1 othewise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);

}
