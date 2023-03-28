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

	index = strlen / 2;

	if (strlen % 2 != 0)
		index = (strlen - 1) / 2;

	for (; index < strlen; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}


