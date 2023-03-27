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

	while (s[count] != '\0')
	{
		count++;

	}

	for (count -= 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');

}
