#include "main.h"
/**
 * _puts - Entry point
 * Description: prints a string.
 * @str: pointer pointing to string.
 * Return: void;
 */
void _puts(char *str)
{

	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
}
