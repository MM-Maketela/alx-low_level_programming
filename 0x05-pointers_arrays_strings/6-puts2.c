#include "main.h"
/**
 * puts2 - Entry point
 * Description: prints every other char of a string.
 * @str: pointer pointing to strng.
 * Return: void;
 */
void puts2(char *str)
{
	int strlen;
	int index;

	strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	for (index = 0; index < strlen; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
