#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Description: A program that prints _putchar.
 * Return: 0 (success)
 */
int main(void)
{
	char string[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
