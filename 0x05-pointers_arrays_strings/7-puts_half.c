#include "main.h"
/**
 * puts_half - Entry point
 * Description: prints every other char of a string.
 * @str: pointer pointing to strng.
 * Return: void;
 */
void puts_half(char *str)
{
	int strlen;
	int index;

	strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}

	for (index = strlen / 2; index < strlen; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}


