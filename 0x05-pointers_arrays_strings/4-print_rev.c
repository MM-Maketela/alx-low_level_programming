#include "main.h"
/**
 * print_rev - Entry point
 * Description: prints a string in revers.
 * @s: pointer pointing to strng.
 * Return: void;
 */
void print_rev(char *s)
{
	int count;

	count = 0;

	while (*s != 0)
	{
		count++;
		s++;

	}

	while (count +1> 0)
	{
		_putchar(*s);
		count--;
		s--;
	}
	_putchar('\n');

}
